#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/print.h"
#include "lib/all-structs.h"
#include "lib/parsing.h"
#include "lib/array.h"

void print_student(Student *student)
{
  printf("ID:%s    Name and Surname:%s      Faculty and Major:%s %s      Subjects:",student->id,student->name,student->faculty
,student->major);
  for(int i=0;i<(student->number_of_subjects);i++)printf("%s, ",student->subjects[i].name);
  if(student->gpa==-1.0)printf("   GPA:-    ");
  else printf("   GPA:%lf    ",student->gpa);
  printf("Contact:%s\nParents:",student->contact);
  for(int i=0;i<2;i++)printf("%s, ",student->parents[i].name);
  puts("");
  puts("------------------------------------------------------------------------------------------");
}

/*

void print_list(struct node *head)
{
  struct node *ptr=&head;
  ptr=head->next;
  while(ptr!=NULL)
  {
	 print_student(ptr->el);
	 ptr=ptr->next;
  }
}
*/


void print_array(Student *students,int n)
{
  for(int i=0;i<n;i++)
  {
    print_student(&students[i]);
  }
}

void print_all(){

    FILE *fptr;
    fptr=fopen("database/students.dat", "r");
    if (fptr==NULL){
        printf("Not Found");
        exit(0);
    }
    char *str = NULL;
    int size=0;
    while(!feof(fptr))
    {
      size_t size = 200;
      getline(&str, &size, fptr);
      if(strlen(str)<=1)break;
      Student *st=parse_student(str);
      print_student(st);
      uninitialize_Student(st);
      fflush(stdout);
      memset(str,0,sizeof(*str));
    }

    /* Free the allocated memory */
    free(str);
    str = NULL;
    fclose(fptr);

}

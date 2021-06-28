#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/print.h"
#include "lib/all-structs.h"
#include "lib/parsing.h"
#include "lib/array.h"

void print_student(Student *student)
{
  printf("ID:%s    Name and Surname:%s      Faculty and Major:%s %s   Class:%d\nSubjects:",student->id,student->name,student->faculty,student->major,student->class);
  for(int i=0;i<(student->number_of_subjects);i++)printf("%s, ",student->subjects[i].name);
  if(student->gpa==-1.0)printf("   GPA:-    ");
  else printf("   GPA:%lf    ",student->gpa);
  printf("Contact:%s\nParents:",student->contact);
  for(int i=0;i<2;i++)printf("%s, ",student->parents[i].name);
  puts("");
  puts("------------------------------------------------------------------------------------------");
}

void print_array(Student *students,int n)
{
  printf("Number of students:%d\n",n);
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
    char str[200];
    int size=0;
    while(!feof(fptr))
    {
      size_t size = 200;
      fgets(str, size, fptr);
      if(strlen(str)<=1)break;
      Student *st=parse_student(str);
      print_student(st);
      uninitialize_Student(st);
      fflush(stdout);
      memset(str,0,sizeof(*str));
    }

    fclose(fptr);

}

void fprint_student(FILE *ptr,Student *student)
{
  fprintf(ptr,"{ID:%s Name:%s Faculty:%s Major:%s Class:%d Subjects:",student->id,student->name,student->faculty,student->major,student->class);

  int n=student->number_of_subjects;
  printf("%d\n",n );
  for(int i=0;i<n-1;i++)
  {
    fprintf(ptr,"%s,",student->subjects[i].name);
  }
  fprintf(ptr,"%s GPA:%lf Contact:%s Parents:%s,%s}\n",student->subjects[n-1].name,student->gpa,student->contact,student->parents[0].name,student->parents[1].name);

}


void fprint_students(array *students)
{
  FILE *fptr = fopen("database/students.dat", "w+");
  if(fptr==NULL)
  {
    printf("Problems with opening\n");
    return ;
  }
  int n=students->size;

  for(int i=0;i<n;i++)
  {
    fprint_student(fptr,&(students->students[i]));
  }

  fclose(fptr);

}

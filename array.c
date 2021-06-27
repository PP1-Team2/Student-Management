#include "lib/all-structs.h"
#include "lib/array.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lib/parsing.h"

array input_array()
{
  FILE *fptr;
  fptr=fopen("database/students.dat", "r");
  if (fptr==NULL){
      printf("Not Found");
      exit(0);
  }
  char *str = NULL;
  array all_students;
  all_students.students=malloc(sizeof(Student));
  all_students.size=1;
  while(!feof(fptr))
  {
    size_t size = 200;
    getline(&str, &size, fptr);
    if(strlen(str)<=1)break;
    Student *st=parse_student(str);

    all_students.students[all_students.size-1]=*st;
    all_students.students = (Student*)realloc(all_students.students,(all_students.size+1)*(sizeof(Student)));
    all_students.size++;
    if(all_students.students==NULL)
    {
      printf("Failed reallocation\n");
      exit(0);
    }
    //push_back(students,st);
    uninitialize_Student(st);
    fflush(stdout);
    memset(str,0,sizeof(str));
  }
  all_students.size--;
  /* Free the allocated memory */
  free(str);
  str = NULL;
  fclose(fptr);
  return all_students;
}

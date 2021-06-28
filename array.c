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
      printf("PROBLEM OCCURED WHILE OPENING FILE\n");
      exit(0);
  }
  char str[200];
  array all_students;
  all_students.students=malloc(sizeof(Student));
  all_students.size=1;
  while(!feof(fptr))
  {
    size_t size = 200;
    fgets(str, size, fptr);
    if(strlen(str)<=1)break;
    Student *st=parse_student(str);
    push_back(&all_students.students,st,&all_students.size);
    uninitialize_Student(st);
    fflush(stdout);
    memset(str,0,sizeof(str));
  }
  all_students.size--;
  fclose(fptr);
  return all_students;
}

void element_delete(Student *students,int *size,int id)
{
  for(int i=id;i<(*size)-1;i++)
  {
    students[i]=students[i+1];
  }
  free(&students[(*size)-1]);
  (*size)--;
}

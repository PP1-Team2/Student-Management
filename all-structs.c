#include "lib/all-structs.h"
#include <stdlib.h>
#include <stdio.h>

void initialize_Parent(Parent *parent)
{

}

void initialize_Grade(Grade *grade)
{

}

void initialize_Instructor(Instructor *instructor)
{
  instructor=(Instructor*)calloc(1,sizeof(Instructor));
}

void initialize_Subject(Subject *subject)
{

}


void initialize_Student(Student *student)
{
  student->gpa=-1.0; //Unknown
}


void uninitialize_Instructor(Instructor *instructor)
{

}
void uninitialize_Grade(Grade *grade)
{

}

void uninitialize_Subject(Subject *subject)
{

}

void uninitialize_Parent(Parent *parent)
{

}

void uninitialize_Student(Student *student)
{
  free(student);
}

void push_back(Student **students,Student *student,int *size)
{
  //adding memory to our dynamical array
  (*students)[(*size)-1]=*student;
  *students = (Student*)realloc(*students,((*size)+1)*(sizeof(Student)));
  (*size)++;
  if(students==NULL)
  {
    printf("Failed reallocation\n");
    exit(0);
  }
}

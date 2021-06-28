#include "lib/all-structs.h"
#include <stdlib.h>
#include <stdio.h>

void initialize_Parent(Parent *parent)
{
  //parent=(Parent*)calloc(1,sizeof(Parent));
//  parent->name=(char*)calloc(25,sizeof(char));
  //parent->role=(char*)calloc(25,sizeof(char));
  //parent->contact=(char*)calloc(25,sizeof(char));
}

void initialize_Grade(Grade *grade)
{
  //grade=(Grade*)calloc(1,sizeof(Grade));
  //grade->name=(char*)calloc(25,sizeof(char));
}

void initialize_Instructor(Instructor *instructor)
{
  instructor=(Instructor*)calloc(1,sizeof(Instructor));
}

void initialize_Subject(Subject *subject)
{
  //subject=(Subject*)calloc(1,sizeof);
  //subject->name=(char*)calloc(22,sizeof(char));
  //initialize_Instructor(subject->instructor);
  //subject->grades=(Grade*)calloc(21,sizeof(Grade));
  //for(int i=0;i<=20;i++)initialize_Grade(&subject->grades[i]);

}


void initialize_Student(Student *student)
{
  //ID, Name , Faculty , Major , class , subjects, gpa , contact , address , parents
  //student->id=(char*)calloc(9,sizeof(char));
  //student->name=(char*)calloc(20,sizeof(char));
  //student->faculty=(char*)calloc(25,sizeof(char));
  //student->major=(char*)calloc(25,sizeof(char));
  //student->subjects=(Subject*)calloc(7,sizeof(Subject));
  //for(int i=0;i<7;i++)initialize_Subject(&student->subjects[i]);
  student->gpa=-1.0; //Unknown
  //student->contact=(char*)calloc(20,sizeof(char));
  //student->address=(char*)calloc(50,sizeof(char));
  //student->parents=(Parent*)calloc(2,sizeof(Parent));
  //for(int i=0;i<2;i++)initialize_Parent(&student->parents[i]);
}


void uninitialize_Instructor(Instructor *instructor)
{
  //free(instructor);
}
void uninitialize_Grade(Grade *grade)
{
  //free(grade->name);
  //free(grade);
}

void uninitialize_Subject(Subject *subject)
{
    //subject=(Subject*)calloc(1,sizeof);
    //free(subject->name);
    //uninitialize_Instructor(subject->instructor);
    //for(int i=0;i<=20;i++)uninitialize_Grade(&subject->grades[i]);
    //free(subject->grades);
}

void uninitialize_Parent(Parent *parent)
{
  //free(parent->name);
  //free(parent->role);
  //free(parent->contact);
  //free(parent);
}

void uninitialize_Student(Student *student)
{
  //free(student->id);
  //free(student->name);
  //free(student->faculty);
  //free(student->major);
  //for(int i=0;i<7;i++)uninitialize_Subject(&student->subjects[i]);
  //free(student->subjects);
  //free(student->contact);
  //free(student->address);
  //for(int i=0;i<2;i++)uninitialize_Parent(&student->parents[i]);
  //free(student->parents);
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

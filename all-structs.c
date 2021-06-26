#include "lib/all-structs.h"
#include <stdlib.h>

void initialize_Parent(Parent *parent)
{
  parent=(Parent*)calloc(1,sizeof(Parent));
  parent->name=(char*)calloc(25,sizeof(char));
  parent->role=(char*)calloc(25,sizeof(char));
  parent->contact=(char*)calloc(25,sizeof(char));
}

void initialize_Grade(Grade *grade)
{
  //grade=(Grade*)calloc(1,sizeof(Grade));
  grade->name=(char*)calloc(25,sizeof(char));
}
void initialize_Instructor(Instructor *instructor)
{
  instructor=(Instructor*)calloc(1,sizeof(Grade));
  instructor->name=(char*)calloc(20,sizeof(char));
}

void initialize_Subject(Subject *subject)
{
  //subject=(Subject*)calloc(1,sizeof);
  subject->name=(char*)calloc(20,sizeof(char));
  initialize_Instructor(subject->instructor);
  subject->grades=(Grade*)calloc(21,sizeof(Grade));
  for(int i=0;i<=20;i++)initialize_Grade(&subject->grades[i]);

}


void initialize_Student(Student *student)
{
  //ID, Name , Faculty , Major , class , subjects, gpa , contact , address , parents
  student->name=(char*)calloc(20,sizeof(char));
  student->faculty=(char*)calloc(25,sizeof(char));
  student->major=(char*)calloc(25,sizeof(char));
  student->subjects=(Subject*)calloc(7,sizeof(Subject));
  for(int i=0;i<7;i++)initialize_Subject(&student->subjects[i]);
  student->gpa=-1; //Unknown
  student->contact=(char*)calloc(20,sizeof(char));
  student->address=(char*)calloc(50,sizeof(char));
  student->parents=(Parent*)calloc(2,sizeof(Parent));
  for(int i=0;i<2;i++)initialize_Parent(&student->parents[i]);
}

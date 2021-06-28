#include "lib/search-and-filter.h"
#include "lib/array.h"
#include "lib/all-structs.h"
#include "lib/print.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int checksubject(Subject *a,Subject *b)
{
  if(strcmp(a->name,b->name)!=0)return 0;
  else return 1;
}

int cmp(Student *a,Student *b)
{
  if(strlen(a->id)!=0)
  {
    if(strcmp(a->id,b->id)!=0)return 0;
  }
  if(strlen(a->name)!=0)
  {
    if(strcmp(a->name,b->name)!=0)return 0;
  }
  if(strlen(a->faculty)!=0)
  {
    if(strcmp(a->faculty,b->faculty)!=0)return 0;
  }
  if(strlen(a->major)!=0)
  {
    if(strcmp(a->major,b->major)!=0)return 0;
  }
  if(strlen(a->contact)!=0)
  {
    if(strcmp(a->contact,b->contact)!=0)return 0;
  }
  if(a->class!=0)
  {
    if(a->class!=b->class)return 0;
  }
  if(a->gpa!=-2.0)
  {
    if(a->gpa!=b->gpa)return 0;
  }
  if(a->number_of_subjects!=0)
  {
    if(a->number_of_subjects!=b->number_of_subjects)return 0;
    for(int i=0;i<(a->number_of_subjects);i++)
    {
     if(checksubject(&a->subjects[i],&b->subjects[i])==0)return 0;
    }
  }
  return 1;
}

Student search(array *students,Student *student)
{
  int n=students->size;
  for(int i=0;i<n;i++)
  {
    if(cmp(student,&(students->students[i])))return students->students[i];
  }
  Student tmp;
  char *name="Not found! There is no such student!\n";
  for(int i=0;i<strlen(name);i++)
  {
    tmp.name[i]=name[i];
  }
  return tmp;
}



array filter(array *students,Student *student)
{
  int n=students->size;
  array res;
  res.size=1;
  res.students=malloc(sizeof(Student));
  int sig=0;
  for(int i=0;i<n;i++)
  {
    if(cmp(student,&(students->students[i])))
    {
      push_back(&res.students,&(students->students[i]),&res.size);
    }
  }
  res.size--;
  return res;
}

#include "lib/add-edit-and-delete.h"
#include "lib/all-structs.h"
#include "lib/array.h"
#include <stdlib.h>
#include <stdio.h>
#include "lib/print.h"
#include "lib/search-and-filter.h"

void add(Student *student)
{
  array students=input_array();
	students.size=1;
	push_back(&students.students,student,&students.size);
	students.size--;
	fprint_students(&students);
	free(students.students);
	free(student);

}


void edit(Student *student,Student *edited)
{
  array students=input_array();
  int n=students.size;
  for(int i=0;i<n;i++)
  {
    if(cmp(student,&(students.students[i])))
    {
      students.students[i]=*edited;
      break;
    }
  }
  fprint_students(&students);
  if(students.size!=0)free(students.students);
}

void delete(Student *student) {
	array students=input_array();
  int n=students.size;
  for(int i=0;i<n;i++)
  {
    if(cmp(student,&(students.students[i])))
    {
      element_delete(students.students,&(students.size),i);
      break;
    }
  }
  fprint_students(&students);
  if(students.size!=0)free(students.students);

}

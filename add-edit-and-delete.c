#include "lib/add-edit-and-delete.h"
#include "lib/all-structs.h"
#include "lib/array.h"
#include <stdlib.h>
#include <stdio.h>
#include "lib/print.h"
#include "lib/search-and-filter.h"
#include "lib/sort.h"

void add(Student *student)
{
  //sort_subjects_by_string(student->subjects,student->number_of_subjects);
  array students=input_array();
  students.size++;
	push_back(&students.students,student,&students.size);
	students.size--;
	fprint_students(&students);
	free(students.students);
}


void edit(Student *student,Student *edited)
{
  sort_subjects_by_string(student->subjects,student->number_of_subjects);
  array students=input_array();
  int n=students.size;
  for(int i=0;i<n;i++)
  {
    sort_subjects_by_string(students.students[i].subjects,students.students[i].number_of_subjects);
  }
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

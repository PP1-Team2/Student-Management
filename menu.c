#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/menu.h"
#include "lib/print.h"
#include "lib/sort.h"
#include "lib/array.h"
#include "lib/search-and-filter.h"
#include "lib/add-edit-and-delete.h"



void add_menu()
{
  system("clear");
  //Initialize
  Student temp;
  temp.gpa=-2.0;
  ////////////
  printf("-------------Enter the needed parameters for searching the student-----------------\n");
  printf(">> Type the ID of the student (must be 8 digits)\n");
  scanf("%s",&temp.id);

  printf(">> Type the full name of the student as the format (Firstname_Last Name)\n");
  scanf("%s",&temp.name);

  printf(">> Type the abbrevation of the faculty of the student\n");
  scanf("%s",&temp.faculty);

  printf(">> Type the abbrevation of major of the student\n");
  scanf("%s",&temp.major);

  printf(">> Type the contact (mobile number) of the student\n");
  scanf("%s",&temp.contact);
  printf(">> Type the name of father of the student\n");
  scanf("%s",&temp.parents[0]);
  printf(">> Type the name of mother of the student\n");
  scanf("%s",&temp.parents[1]);
  int n;

  printf(">> Type the number of studied subjects of the student\n");
  scanf("%d",&temp.number_of_subjects);
  n=temp.number_of_subjects;
  printf(">> Type the all studied %d subjects of the student in one line (keep one space between subjects)\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",temp.subjects[i].name);
  }
  add(&temp);
}

void edit_menu(Student *student)
{
  printf("-------------Enter the needed parameters for editing the entity-----------------\n");
  Student temp;
  temp.gpa=-2.0;
  printf(">> Type the ID of the student (must be 8 digits)\n");
  scanf("%s",&temp.id);

  printf(">> Type the full name of the student as the format (Firstname_Last Name)\n");
  scanf("%s",&temp.name);

  printf(">> Type the abbrevation of the faculty of the student\n");
  scanf("%s",&temp.faculty);

  printf(">> Type the abbrevation of major of the student\n");
  scanf("%s",&temp.major);

  printf(">> Type the contact (mobile number) of the student\n");
  scanf("%s",&temp.contact);
  printf(">> Type the name of father of the student\n");
  scanf("%s",&temp.parents[0]);
  printf(">> Type the name of mother of the student\n");
  scanf("%s",&temp.parents[1]);
  int n;

  printf(">> Type the number of studied subjects of the student\n");
  scanf("%d",&temp.number_of_subjects);
  n=temp.number_of_subjects;
  printf(">> Type the all studied %d subjects of the student in one line (keep one space between subjects)\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",temp.subjects[i].name);
  }
  edit(student,&temp);
  printf("------Succesfully edited !----\n");
  return ;
}

void delete_menu(Student *student)
{
  printf(">> Are you sure that you want to delete this student from the system?\n");
  printf("Type y for yes or any symbol for no\n");
  char tmp[2];
  scanf("%s",&tmp);
  if(tmp[0]!='y')return;
  else
  {
    delete(student);
    printf("------Succesfully deleted !----\n");
    return ;
  }
}



void filter_menu()
{
  system("clear");
  Student temp;
  temp.gpa=-2.0;
  printf("----------You can filter by using any combination of paratemeters. Answer on next questions for being able to filter.------------\n\n");
  printf(">> Do you want to filter by using the ID of the student?\nType y for yes or any symbol for no\n");
  char tmp[2];
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the ID of the student (must be 8 digits)~\n");
   scanf("%s",&temp.id);
  }
  printf(">> Do you want to filter by using the full name of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the Full Name of the student as format (FirstName_Surname)~\n");
   scanf("%s",&temp.name);
  }
  printf(">> Do you want to filter by using the Name of Faculty of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the abbrevation of the Faculty of the student~\n");
   scanf("%s",&temp.faculty);
  }
  printf(">> Do you want to filter by using the Name of Major of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the abbrevation of the Major of the student~\n");
   scanf("%s",&temp.major);
  }
  printf(">> Do you want to filter by using the contact(mobile number) of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the mobile number of the student~\n");
   scanf("%s",&temp.contact);
  }
  printf(">> Do you want to filter by using the studied subjects of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the number of the studied subjects~\n");
   scanf("%d",&temp.number_of_subjects);
   int n=temp.number_of_subjects;
   printf(">> Type the all studied %d subjects of the student in one line (keep one space between subjects)\n",n);
   for(int i=0;i<n;i++)
   {
     scanf("%s",temp.subjects[i].name);
   }

  }
  else temp.number_of_subjects=0;
  //print_student(&temp);

  array all_students=input_array();

  array needed=filter(&all_students,&temp);
  if(needed.size==0)
  {
    printf("Not found! There is no such student!\n");
  }
  else print_array(needed.students,needed.size);

  free(all_students.students);
  free(needed.students);

}

void search_menu()
{
  system("clear");
  //Initialize
  Student temp;
  temp.gpa=-2.0;
  ////////////
  printf("-------------Enter the needed parameters for searching the student-----------------\n");
  printf(">> Type the ID of the student (must be 8 digits)\n");
  scanf("%s",&temp.id);

  printf(">> Type the full name of the student as the format (Firstname_Last Name)\n");
  scanf("%s",&temp.name);

  printf(">> Type the abbrevation of the faculty of the student\n");
  scanf("%s",&temp.faculty);

  printf(">> Type the abbrevation of major of the student\n");
  scanf("%s",&temp.major);

  printf(">> Type the contact (mobile number) of the student\n");
  scanf("%s",&temp.contact);
  int n;

  printf(">> Type the number of studied subjects of the student\n");
  scanf("%d",&temp.number_of_subjects);
  n=temp.number_of_subjects;
  printf(">> Type the all studied %d subjects of the student in one line (keep one space between subjects)\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",temp.subjects[i].name);
  }
  array all_students=input_array();
  Student res=search(&all_students,&temp);
  if(strcmp(res.name,"Not found! There is no such student!\n")==0)printf("Not found! There is no such student!\n");
  else print_student(&res);
  free(all_students.students);
  char tmp[2];
  printf(">> Type e for editing the item , type d for deleting the item or something else for backing the menu\n");
  scanf("%s",&tmp);
  if(tmp[0]=='e')
  {
    edit_menu(&res);
  }
  else if(tmp[0]=='d')
  {
    delete_menu(&res);
  }
  else return;



}


void sort_menu()
{
  /*
  while(1)
  {
  */
   system("clear");
   printf(">> To sort all students by ID, please type 1\n");
   printf(">> To sort all students by Full Name, please type 2\n");
   printf(">> To sort all students by Faculty, please type 3\n");
   printf(">> To sort all students by Major, please type 4\n");
   printf(">> To sort all students by GPA, please type 5\n");
   printf(">> To sort all students by Mobile number, please type 6\n");
   printf(">> To exit from the sort menu, please type 7\n");
   int x;
   scanf("%d",&x);
   if(x==7)return ;
   system("clear");
   printf(">> To sort all students in increasement order, please type 1\n");
   printf(">> To sort all students in decreasement order, please type 2\n");
   int xx;
   scanf("%d",&xx);
   array all=input_array();
   switch(x){
    case 1:
      sort_by_string(all.students,xx,all.size,x);
      break;
    case 2:
      sort_by_string(all.students,xx,all.size,x);
      break;
    case 3:
      sort_by_string(all.students,xx,all.size,x);
      break;
    case 4:
      sort_by_string(all.students,xx,all.size,x);
      break;
    case 5:
     sort_by_gpa(all.students,xx,all.size);
     break;
    case 6:
     sort_by_string(all.students,xx,all.size,x);
     break;

  }
  print_array(all.students,all.size);
  free(all.students);
  fflush(stdout);
  /*
  printf("Type something for coming back to sort menu!\n");

  char xc;
  scanf(" %c", &xc);
  */
 //}
}

void main_menu()
{
 while(1) {
  system("clear");
  printf("============Welcome to the student management system of ADA university!==========\n");
  puts("");
  printf(">>  To list all students, please type 1\n");
  printf(">>  To add student's information, please type 2\n");
  printf(">>  To sort students' information, please type 3\n");
  printf(">>  To search student, please type 4\n");
  printf(">>  To filter students, please type 5\n");
  printf(">>  To exit from the program, please type 6\n");
  int x;
  scanf("%d",&x);
  switch(x){
    case 1:
      system("clear");
      print_all();
      break;
    case 2:
      add_menu();
      break;
    case 3:
      sort_menu();
      break;
    case 4:
      search_menu();
      break;
    case 5:
      filter_menu();
      break;
    case 6:
      return;

  }
  printf("Type something for coming back to menu!\n");
  fflush(stdout);
  char xx;
  scanf(" %c", &xx);

  }

}

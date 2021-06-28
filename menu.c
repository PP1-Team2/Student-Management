#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/menu.h"
#include "lib/print.h"
#include "lib/sort.h"
#include "lib/array.h"
#include "lib/search-and-filter.h"
#include "lib/add-edit-and-delete.h"
#include "lib/error-checking.h"

void type_entity(Student *temp)
{
  printf(">> Type the ID of the student (must be 9 digits)\n");
  while (1) {
    scanf("%s",&temp->id);
    if(!check_id(&temp->id))break;
    else
    {
      printf("Please, type again !\n");
    }
  }



  printf(">> Type the full name of the student as the format (Firstname_Surname)\n");
  printf("You should not exceed the maximum limit:59\n");
  while (1) {
    scanf("%s",&temp->name);
    if(!check_name(&temp->name))break;
    else
    {
      printf("Please, type again !\n");
    }
  }

  printf(">> Type the abbrevation of the faculty of the student\n");
  printf("You should not exceed the maximum limit:24\n");
  while (1) {
    scanf("%s",&temp->faculty);
    if(!check_faculty(&temp->faculty))break;
    else
    {
      printf("Please, type again !\n");
    }
  }

  printf(">> Type the abbrevation of major of the student\n");
  printf("You should not exceed the maximum limit:24\n");
  while (1) {
    scanf("%s",&temp->major);
    if(!check_major(&temp->major))break;
    else
    {
      printf("Please, type again !\n");
    }
  }

  printf(">> Type the class of the student\n");
  scanf("%d",&temp->class);

  printf(">> Type the contact (mobile number) of the student\n");
  printf("You should not exceed the maximum limit:20\n");
  while (1) {
    scanf("%s",&temp->contact);
    if(!check_contact(&temp->contact))break;
    else
    {
      printf("Please, type again !\n");
    }
  }
  printf(">> Type the name of father of the student as the format (Firstname_Surname)\n");
  printf("You should not exceed the maximum limit:25\n");
  while (1) {
    scanf("%s",&temp->parents[0].name);
    if(!check_parent(&temp->parents[0].name))break;
    else
    {
      printf("Please, type again !\n");
    }
  }


  printf(">> Type the name of mother of the student as the format (Firstname_Surname)\n");
  printf("You should not exceed the maximum limit:25\n");
  while (1) {
    scanf("%s",&temp->parents[1].name);
    if(!check_parent(&temp->parents[1].name))break;
    else
    {
      printf("Please, type again !\n");
    }
  }

  printf(">> Type the GPA of the student as a fractional number (Max GPA is 4.0) \n");
  while (1) {
    scanf("%lf",&temp->gpa);
    if(!check_gpa(temp->gpa))break;
    else
    {
      printf("Please, type again !\n");
    }
  }

  int n;

  printf(">> Type the number of studied subjects of the student\n");
  printf("You should not exceed the maximum limit:40\n");
  while(1)
  {
   scanf("%d",&temp->number_of_subjects);
   if(!check_numsubj(temp->number_of_subjects))break;
   else
   {
    printf("Please, type again !\n");
   }
  }
  n=temp->number_of_subjects;
  printf(">> Type the all studied %d subjects of the student in one line (keep one space between subjects)\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",&temp->subjects[i].name);
  }
}

void type_entity_1(Student *temp)
{
  printf("----------You can filter by using any combination of parameters. Answer on next questions for being able to filter.------------\n\n");
  printf(">> Do you want to filter by using the ID of the student?\nType y for yes or any symbol for no\n");
  char tmp[2];
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the ID of the student (must be 9 digits)~\n");
   while (1) {
     scanf("%s",&temp->id);
     if(!check_id(&temp->id))break;
     else
     {
       printf("Please, type again !\n");
     }
   }
  }
  printf(">> Do you want to filter by using the full name of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the Full Name of the student as format (FirstName_Surname)~\n");
   printf("You should not exceed the maximum limit:59\n");
   while (1) {
     scanf("%s",&temp->name);
     if(!check_name(&temp->name))break;
     else
     {
       printf("Please, type again !\n");
     }
   }
  }
  printf(">> Do you want to filter by using the Name of Faculty of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the abbrevation of the Faculty of the student~\n");
   printf("You should not exceed the maximum limit:24\n");
   while (1) {
     scanf("%s",&temp->faculty);
     if(!check_faculty(&temp->faculty))break;
     else
     {
       printf("Please, type again !\n");
     }
   }
  }
  printf(">> Do you want to filter by using the Name of Major of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the abbrevation of the Major of the student~\n");
   printf("You should not exceed the maximum limit:24\n");
   while (1) {
     scanf("%s",&temp->major);
     if(!check_major(&temp->major))break;
     else
     {
       printf("Please, type again !\n");
     }
   }
  }
  printf(">> Do you want to filter by using the class of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the class of the student~\n");
   scanf("%s",&temp->class);
  }
  printf(">> Do you want to filter by using the contact(mobile number) of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the mobile number of the student~\n");
   printf("You should not exceed the maximum limit:20\n");
   while (1) {
     scanf("%s",&temp->contact);
     if(!check_contact(&temp->contact))break;
     else
     {
       printf("Please, type again !\n");
     }
   }
  }
  printf(">> Do you want to filter by using the studied subjects of the student?\nType y for yes or any symbol for no\n");
  scanf("%s",&tmp);
  if(tmp[0]=='y')
  {
   printf("~Type the number of the studied subjects~\n");
   printf("You should not exceed the maximum limit:40\n");
   while(1)
   {
    scanf("%d",&temp->number_of_subjects);
    if(!check_numsubj(temp->number_of_subjects))break;
    else
    {
     printf("Please, type again !\n");
    }
   }
   int n=temp->number_of_subjects;
   printf(">> Type the all studied %d subjects of the student in one line (keep one space between subjects)\n",n);
   for(int i=0;i<n;i++)
   {
     scanf("%s",&temp->subjects[i].name);
   }

  }
  else temp->number_of_subjects=0;
}

void add_menu()
{
  system("clear");
  //Initialize
  Student temp;
  temp.gpa=-2.0;
  ////////////
  printf("-------------Enter the required parameters for adding the student entity-----------------\n");
  type_entity(&temp);
  add(&temp);
  printf("Succesfully added!\n");
}

void edit_menu(Student *student)
{
  printf("-------------Enter the required parameters for editing the entity-----------------\n");
  Student temp;
  temp.gpa=-2.0;
  temp.class=0;
  type_entity(&temp);
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
  temp.class=0;
  type_entity_1(&temp);
  array all_students=input_array();

  array required=filter(&all_students,&temp);
  if(required.size==0)
  {
    printf("Not found! There is no such student!\n");
  }
  else print_array(required.students,required.size);

  free(all_students.students);
  free(required.students);

}

void search_menu()
{
  system("clear");
  //Initialize
  Student temp;
  temp.gpa=-2.0;
  temp.class=0;
  ////////////
  type_entity(&temp);
  array all_students=input_array();
  Student res=search(&all_students,&temp);
  if(strcmp(res.name,"Not found! There is no such student!\n")==0)printf("Not found! There is no such student!\n");
  else print_student(&res);
  free(all_students.students);
  if(strcmp(res.name,"Not found! There is no such student!\n")==0)return ;
  char tmp[2];
  printf(">> Type e for editing this item , type d for deleting the item or something else for backing the menu\n");
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
   system("clear");
   printf(">> To sort all students by ID, please type 1\n");
   printf(">> To sort all students by Full Name, please type 2\n");
   printf(">> To sort all students by Faculty, please type 3\n");
   printf(">> To sort all students by Major, please type 4\n");
   printf(">> To sort all students by Class, please type 5\n");
   printf(">> To sort all students by GPA, please type 6\n");
   printf(">> To sort all students by Mobile number, please type 7\n");
   printf(">> To exit from the sort menu, please type 8\n");
   int x;
   scanf("%d",&x);
   if(x>=8 || x==0)return ;
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
      sort_by_class(all.students,xx,all.size);
      break;
    case 6:
     sort_by_gpa(all.students,xx,all.size);
     break;
    case 7:
     sort_by_string(all.students,xx,all.size,x);
     break;

  }
  print_array(all.students,all.size);
  fprint_students(&all);
  free(all.students);
  fflush(stdout);
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
  if(x>=7)return ;
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
  char xx[100];
  scanf("%s", &xx);

 }

}

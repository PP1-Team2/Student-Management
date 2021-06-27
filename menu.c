#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/menu.h"
#include "lib/print.h"
#include "lib/sort.h"
#include "lib/array.h"




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

    case 3:
      sort_menu();
      break;
    case 4:

    case 5:

    case 6:
      return;

  }
  printf("Type something for coming back to menu!\n");
  fflush(stdout);
  char xx;
  scanf(" %c", &xx);

  }

}

#include <stdio.h>
#include <stdlib.h>
#include "lib/menu.h"
#include "lib/print.h"

void main_menu()
{
 int size=1;
 while(1) {
  printf("============Welcome to the student management system of ADA university!==========\n");
  puts("");
  printf(">>  To list all students please type 1\n");
  printf(">>  To add student information please type 2\n");
  printf(">>  To edit student information type 3\n");
  printf(">>  To exit from the program please type 4\n");
  int x;
  scanf("%d",&x);
  switch(x){
    case 1:
      print_all();
    case 2:

    case 3:

    case 4:

  }
 }

}

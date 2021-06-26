#include <stdio.h>
#include <stdlib.h>
#include "lib/menu.h"

void main_menu()
{
 int size=1;
 while(1) {
  printf("============Welcome to the student management system of ADA university!==========\n==============Please, choose one of the options by typing the number.==========\n");
  puts("");
  printf(">>  To list all students--> 1\n");
  printf(">>  To add student info--> 2\n");
  printf(">>  To delete student info--> 3\n");
  printf(">>  To create a new item--> 4\n");
  printf(">>  To edit student info-> 5\n");
  printf(">>  To exit the process--> 0\n");
  int x;
  scanf("%d",&x);

  if (x==0) return ;
  if (x==1) {

  }
 }

}

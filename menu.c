#include "lib/menu.h"
#include <stdio.h>

void menu_main()
{
 menu main_menu[20];
 main_menu[0].name="Exit";
 int size=1;
 while(1)
 {
  printf("Welcome to the student management system of ADA university !\nPlease , choose one of the options by typing the number.\n");
  for(int i=0;i<size;i++)
  {
    printf("%d) %s\n",i+1,main_menu[i].name);
  }
  int x;
  scanf("%d",&x);
 }
}

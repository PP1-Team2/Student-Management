#include <stdio.h>
#include "all-structs.h"
#include "search-and-filter.h"
#include "add-and-delete.h"
#include "sort.h"

struct menu
{
  char *name;
}main_menu[20];


int main(){
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



return 0;
}

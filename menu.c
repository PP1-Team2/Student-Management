#include <stdio.h>
#include <stdlib.h>
#include "lib/menu.h"
#include "lib/print.h"

void main_menu()
{
 int size=1;
 while(1) {
  system("clear");
  printf("============Welcome to the student management system of ADA university!==========\n");
  puts("");
  printf(">>  To list all students please type 1\n");
  printf(">>  To add student's information please type 2\n");
  printf(">>  To sort students' information type 3\n");
  printf(">>  To search student  type 4\n");
  printf(">>  To filter students type 5\n");
  printf(">>  To exit from the program please type 6\n");
  int x;
  scanf("%d",&x);
  switch(x){
    case 1:
      system("clear");
      print_all();
      break;
    case 2:

    case 3:

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

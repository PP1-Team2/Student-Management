
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int main_menu[20];
 
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


  if (x==0) return 0;
  if (x==1) {
      FILE *file;
    char filename[100000], database;
    
    file=fopen("input.txt", "r");
    if (file==NULL){
        printf("Not Found");
     exit(0);
}
    database=fgetc(file);
    while (database !=EOF){
        printf ("%c", database);
        database=fgetc(file);
}
    fclose(file);
}




 }

 return 0;
}

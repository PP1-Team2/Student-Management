#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_all(){

    FILE *file;
    char filename[100000], database;

    file=fopen("students.dat", "r");
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

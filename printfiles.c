#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main(){

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
    return 0;
}
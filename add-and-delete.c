#include "lib/create.h"
#include "lib/delete.h"
#include "lib/all-structs.h"
#include <stdlib.h>
#include <stdio.h>

void add(Student *all_students) {
  //adding memory to our dynamical array
  int size = sizeof(all_students);
  int new_size = size + sizeof(Student);
	all_students = realloc(all_students,new_size);
  //
  int length = sizeof(all_students)/sizeof(Student);

   //adding new student to file

	printf("Enter Student ID (must be 8 digits):");
	scanf("%s", all_students[length-1].id);
  printf("Enter Full Name of Student (Name and Surname) (make sure you wrote the name with capital letter): ");
	scanf("%s", all_students[length-1].name);
  


	//fp = fopen("/Users/User/Desktop/student_management/student_info.dat", "ab");

	//fwrite(s1, sizeof(Student), 1, fp); // write to the file
	//fclose(fp);

}// end create

/*
void delete() {
	FILE* fp1;
	int num, found = 0;
	fp1 = fopen("delete.dat", "wb");

	printf("\nEnter the student ID:");
	scanf("%d", &num);
	char buffer[20];
	itoa(num, buffer, 10);
	fp = fopen("/Users/User/Desktop/student_management/student_info", "rb");

	fseek(fp, 0, SEEK_END);
	int a = ftell(fp) / sizeof(Student);
	for (int i = 0; i < a; i++) {
		if (!(strcmp(s1[i].student_id, buffer)))
		{
			found = 1;
		}
		else
		{
			fwrite(&a, sizeof(a), 1, fp1);
			fwrite(s1 + i, sizeof(Student), 1, fp1);
			fflush(fp1);
		}
	}

	fclose(fp1);
	if (found == 0)
	{
		printf("No ID with this number!\n"); //error check
	}
	else
	{
		fp = fopen("student_info.dat", "wb");
		fp1 = fopen("delete.dat", "rb");

		fwrite(&a, sizeof(a), 1, fp);
		for (int i = 0; i < a; i++) {

			fread(s1 + i, sizeof(Student), 1, fp1);	//deleting happens there
			fwrite(s1 + i, sizeof(Student), 1, fp);
		}
	}

	fclose(fp);
	fclose(fp1);
} // end delete
*/

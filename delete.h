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

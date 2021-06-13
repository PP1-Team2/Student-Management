void create() {
	s1 = (Student*) malloc(sizeof(Student));  //adding new student to file
	int count = 0;

	printf("Enter Student ID (must be 8 digits):");
	scanf("%s", &s1->student_id);
	while (count == 0) {
		for (int i = 0; i < strlen(s1->student_id); i++) {  
			if (!(isdigit(s1->student_id[i]))) {   //error check (it should be digits)
				count++;
				break;
			}
		}
		if (count != 0 || strlen(s1->student_id)!=8)  // ID must have 8 digits
		{
			printf("Invalid ID number\nPlease, enter new ID number:");
			scanf("%s", &s1->student_id);
		}
		else
		{
			break;
		}
		count = 0;
	}
	
		printf("Enter name (make sure you wrote the name with capital letter): ");  
		while (count == 0) {                                                                   //while sorting
		scanf("%s", &s1->student_info.name);
			for (int i=0; i < strlen(s1->student_info.name); i++) {
				if (!(isalpha(*s1->student_info.name))) {
					count++;
					break;
				}

			}
			char ch = s1->student_info.name[0]; //inside of struct of struct
			if (count != 0 || (!isupper(ch)))
			{
				printf("Invalid Name\nPlease, enter new student name (make sure you wrote the name with capital letter):");
				scanf("%s", &s1->student_info.name);
			}
			else
			{
				break;
			}
			count = 0;
		}
		printf("Enter Surname: ");
		scanf("%s", &s1->student_info.surname); //inside of struct of struct
		while (count == 0) {
			for (int i = 0; i < strlen(s1->student_info.surname); i++) {
				if (!(isalpha(*s1->student_info.surname))) {   //error check
					count++;
					break;
				}

			}
			char ch= s1->student_info.surname[0];
			if (count != 0 || (!isupper(ch)))//inside of struct of struct
			{
				printf("Invalid surname\nPlease, enter new surname: ");
				scanf("%s", &s1->student_info.surname);
			}
			else
			{
				break;
			}
			count = 0;
		}
		

	fp = fopen("/Users/User/Desktop/student_management/student_info.dat", "ab");  
	
	fwrite(s1, sizeof(Student), 1, fp); // write to the file
	fclose(fp);

}// end create

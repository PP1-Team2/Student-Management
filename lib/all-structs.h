#ifndef INSTRUCTOR
#define INSTRUCTOR
typedef struct{
  char name[20];
}Instructor;
void initialize_Instructor(Instructor*);
void uninitialize_Instructor(Instructor*);
#endif

#ifndef GRADE
#define GRADE
typedef struct{
  char name[25];
  double value;
}Grade;
void initialize_Grade(Grade*);
void uninitialize_Grade(Grade*);
#endif

#ifndef SUBJECT
#define SUBJECT

typedef struct{
  char name[22];
  double general_grade;
  Grade grades[20];
  Instructor instructor[1];
}Subject;
void initialize_Subject(Subject*);
void uninitialize_Subject(Subject*);
#endif

#ifndef PARENT
#define PARENT

typedef struct{
  char name[25],role[25],contact[25];
}Parent;
void initialize_Parent(Parent*);
void uninitialize_Parent(Parent*);
#endif

#ifndef STUDENT
#define STUDENT
typedef struct{
  //ID, Name , Faculty , Major , class , subjects, gpa , contact , address , parents
  char id[9],name[60],faculty[25],major[25],address[50],contact[20];
  Parent parents[2];
  Subject subjects[40];
  int number_of_subjects;
  int class;
  double gpa;
}Student;

typedef struct{
  Student *students;
  int size;
}array;

void initialize_Student(Student*);
void uninitialize_Student(Student*);
void push_back(Student **,Student *,int *);
#endif

#ifndef INSTRUCTOR
#define INSTRUCTOR
typedef struct{
  char *name;
}Instructor;
void initialize_Instructor(Instructor*);
#endif

#ifndef GRADE
#define GRADE
typedef struct{
  char *name;
  double value;
}Grade;
void initialize_Grade(Grade*);
#endif

#ifndef SUBJECT
#define SUBJECT

typedef struct{
  char *name;
  double general_grade;
  Grade *grades;
  Instructor *instructor;
}Subject;
void initialize_Subject(Subject*);
#endif

#ifndef PARENT
#define PARENT

typedef struct{
  char *name,*role,*contact;
}Parent;
void initialize_Parent(Parent*);
#endif

#ifndef STUDENT
#define STUDENT
typedef struct{
  //ID, Name , Faculty , Major , class , subjects, gpa , contact , address , parents
  char *id,*name,*faculty,*major,*address,*contact;
  Parent *parents;
  Subject *subjects;
  int class;
  double gpa;
}Student;

void initialize_Student(Student*);
void push_back(Student *,Student *);
#endif

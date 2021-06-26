typedef struct{
  char *name;
}Instructor;

typedef struct{
  char *name;
  double value;
}Grade;

typedef struct{
  char *name;
  double general_grade;
  Grade *grades;
  Instructor *instructor;
}Subject;

typedef struct{
  char *name,*role,*contact;
}Parent;


typedef struct{
  //ID, Name , Faculty , Major , class , subjects, gpa , contact , address , parents
  char *name,*faculty,*major,*address,*contact;
  Parent *parents;
  Subject *subjects;
  int class;
  int gpa;
  int id;
}Student;


void initialize_Student(Student*);
void initialize_Parent(Parent*);
void initialize_Subject(Subject*);
void initialize_Instructor(Instructor*);
void initialize_Grade(Grade*);

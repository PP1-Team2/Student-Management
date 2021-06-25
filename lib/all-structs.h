typedef struct{
  char *name;
}instructor;

typedef struct{
  char *name;
  double value;
}grade;

typedef struct{
  char *name;
  double general_grade;
  grade *grades;
  instructor *Instructor;
}Subject;

typedef struct{
  char *name,*role,*contact;
}Parent;


typedef struct{
  //ID, Name , Faculty , Major , class , subjects, gpa , achievements , contact , address , parents
  char *name,*faculty,*major,*achievements,*address,*contact;
  struct Parents *parents;
  struct Subject *subjects;
  int class;
  int gpa;
  int id;
}Student;


void initialize(Student);

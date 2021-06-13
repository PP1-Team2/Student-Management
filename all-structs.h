struct instructor{
  char *name;
};

struct grade{
  char *name;
  double value;
};

struct Subject{
  char *name;
  double general_grade;
  struct grade *grades;
  struct instructor *Instructor;
};

struct Parents{
  char *name,*role,*contact;
};


struct Student{
  // Name , Faculty , Major , class , subjects, gpa , achievements , contact , address , parents
  char *name,*faculty,*major,*achievements,*address,*contact;
  struct Parents *parents;
  struct Subject *subjects;
  int class;
  int gpa;
};

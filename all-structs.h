struct grade{
  char *name;
  int value;
};

struct Subject{
  char *name;
  struct grade grades;
};


struct Student{
  char *name;
  struct Subject subjects;
};

#include "all-structs.h"

void init(char *orig,char (*tmp)[60],int *id);
void init_subjects(Subject *orig,char (*tmp)[60],int *id,int *size);
void init_parents(Parent *orig,char (*tmp)[60],int *id);

Student *parse_student(char*);

#include <ctype.h>
#include <string.h>

int check_id(char *id)
{
  if(strlen(id)!=8)
  {
    printf("Mistake! The size of ID should be 8\n"); //size error
    return 1;
  }
  for (int i = 0; i < strlen(*id); i++) {
    if (!(isdigit(id[i])) {   //error check (it should be digits)
      printf("Mistake! ID should consists from digits\n");
      return 1;
    }
 }
 return 0;
}

int check_name(char *name)
{
  for (int i=0; i < strlen(*name); i++) {
  if (!(isalpha((*name)[i])) && (*name)[i]!='_' ) {
    printf("Mistake! Wrong name format\n");
    return 1;
  }
 }
 int sig=0;
 for (int i=0; i < strlen(*name); i++) {
  if((*name)[i]=='_')sig++;
 }
 if(sig!=1)
 {
   printf("Mistake! Wrong name format\n");
   return 1;
 }
 char ch = (*name)[0]; //First character
 if ((!isupper(ch)))
 {
   printf("Mistake! Wrong name format\n");
   return 1;
 }
 return 0;
}

int check_faculty(char *faculty)
{
  //Todo
}

int check_major(char *major)
{
  //Todo
}

int check_contact(char *number)
{
  //Todo
}

int check_gpa(double x)
{
  if(x>4.0)
  {
    printf("Mistake! Max GPA is 4.0!\n");
    return 1;
  }
  return 0;
}

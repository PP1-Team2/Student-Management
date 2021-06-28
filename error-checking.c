#include <ctype.h>
#include <string.h>
#include "lib/error-checking.h"
#include <stdio.h>

int check_id(char (*id)[11])
{
  if(strlen(*id)!=9)
  {
    printf("Mistake! The size of ID should be 9\n"); //size error
    return 1;
  }
  for (int i = 0; i < 9; i++) {
    if (!(isdigit((*id)[i]))) {   //error check (it should be digits)
      printf("Mistake! ID should consists from digits\n");
      return 1;
    }
 }
 return 0;
}

int check_parent(char (*name)[25])
{
  if(strlen(*name)>25)
  {
    printf("You exceeded the limit\n");
    return 1;
  }
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

int check_name(char (*name)[60])
{
  if(strlen(*name)>59)
  {
    printf("You exceeded the limit\n");
    return 1;
  }
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

int check_faculty(char (*faculty)[25])
{
  if(strlen(*faculty)>24)
  {
    printf("You exceeded the limit\n");
    return 1;
  }
  if(strcmp(*faculty,"SPIA")==0 || strcmp(*faculty,"SITE")==0 || strcmp(*faculty,"SB")==0)return 0;
  else {
    printf("There is not such faculty!\n");
    return 1;
  }
}

int check_major(char (*major)[25])
{
  if(strlen(*major)>24)
  {
    printf("You exceeded the limit\n");
    return 1;
  }
  if(strcmp(*major,"CS")==0 || strcmp(*major,"IT")==0 || strcmp(*major,"CE")==0 || strcmp(*major,"BA")==0 || strcmp(*major,"EC")==0 || strcmp(*major,"FC")==0 || strcmp(*major,"MBA")==0 || strcmp(*major,"Law")==0 || strcmp(*major,"PA")==0 || strcmp(*major,"IS")==0 || strcmp(*major,"CDM")==0)return 0;
  else{
    printf("There is not such major!\n");
    return 1;

  }
}

int check_contact(char (*number)[20])
{
  if(strlen(*number)>20)
  {
    printf("You exceeded the limit\n");
    return 1;
  }
  if((*number)[0]!='+')
  {
    printf("Wrong mobile number format\n");
    return 1;
  }
  if(strlen(*number)>16)
  {
    printf("Wrong size of mobile number\n");
    return 1;
  }
  //ToDo update by using database of country codes
  return 0;
}

int check_gpa(double x)
{
  if(x>4.0)
  {
    printf("Mistake! Max GPA is 4.0!\n");
    return 1;
  }
  else if(x<-1.0)
  {
    printf("Mistake! Min GPA is -1.0 if GPA is unknown!\n");
    return 1;
  }
  return 0;
}

int check_numsubj(int x)
{
  if(x>40)
  {
    printf("You exceeded the limit\n");
    return 1;
  }
  else return 0;
}

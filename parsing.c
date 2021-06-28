#include "lib/parsing.h"
#include "lib/all-structs.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void init(char *orig,char (*tmp)[60],int *id)
{
  strcpy(orig,*tmp);
  memset(*tmp,0,sizeof(*tmp));
  *id=0;
}

void init_subjects(Subject *orig,char (*tmp)[60],int *id,int *size)
{
  char subj[60];
  int id_2=0;
  int count=0;
  for(int j=0;j<strlen(*tmp);j++)
  {
    if((*tmp)[j]==',')
    {
      strcpy(orig[count].name,subj);
      memset(subj,0,sizeof(subj));
      id_2=0;
      count++;
    }
    else subj[id_2++]=(*tmp)[j];
  }
  strcpy(orig[count].name,subj);
  for(int j1=0;j1<=id_2;j1++)subj[j1]=0;
  id_2=0;
  count++;
  *size=count;
  memset(*tmp,0,sizeof(*tmp));
  *id=0;
}


void init_parents(Parent *orig,char (*tmp)[60],int *id)
{
  char parents[42];
  int id_2=0;
  int count=0;
  for(int j=0;j<strlen(*tmp);j++)
  {
    if((*tmp)[j]==',')
    {
      strcpy(orig[count].name,parents);
      memset(parents,0,sizeof(parents));
      id_2=0;
      count++;
    }
    else parents[id_2++]=(*tmp)[j];
  }
  strcpy(orig[count].name,parents);
  for(int j1=0;j1<=id_2;j1++)parents[j1]=0;
  memset(*tmp,0,sizeof(*tmp));
  id_2=0;
  count++;
  *id=0;
}

Student *parse_student(char *string)
{
  //ID, Name , Faculty , Major , class , subjects, gpa , contact , address , parents
  Student *student;
  student=(Student*)calloc(1,sizeof(Student));
  initialize_Student(student);
  int id=0;
  int cnt=0;
  char tmp[60];
  int sig=0;
  for(int i=0;i<strlen(string);i++)
  {
    if(string[i]==':' || string[i]=='}')
    {
      sig=1;
      if(cnt==1)
      {
        init(student->id,&tmp,&id);
      }

      else if(cnt==2)
      {
        init(student->name,&tmp,&id);
      }

      else if(cnt==3)
      {
        init(student->faculty,&tmp,&id);
      }
      else if(cnt==4)
      {
        init(student->major,&tmp,&id);
      }
      else if(cnt==5)
      {
        init_subjects(student->subjects,&tmp,&id,&student->number_of_subjects);
      }

      else if(cnt==6)
      {
        if(tmp[0]=='-')student->gpa=-1.0; //Unknown
        else
        {
          int id_2=0;
          student->gpa=0.0;

          while(tmp[id_2]!='.')
          {
            student->gpa=student->gpa*10.0+(tmp[id_2]-'0');
            id_2++;
          }

          id_2++;
          long long double_part=0;
          long long denominator=1;
          while(id_2<id)
          {
            double_part=double_part*10+(tmp[id_2++]-'0');
            denominator*=10;
          }
          student->gpa+=(double)double_part/denominator;


        }
        id=0;
        memset(tmp,0,sizeof(tmp));
      }
      else if(cnt==7)
      {
        init(student->contact,&tmp,&id);
      }
      else
      {
        init_parents(student->parents,&tmp,&id);
      }
      cnt++;
    }
    else if((isdigit(string[i]) || isalpha(string[i]) || string[i]=='-' || string[i]=='+' || string[i]==',' || string[i]=='_' || string[i]=='.') && sig)
    {
      tmp[id++]=string[i];
    }
    else if(string[i]==' ')sig=0;
  }
  return student;
}

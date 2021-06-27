#include<stdlib.h>
#include <string.h>
#include "lib/all-structs.h"
#include "lib/sort.h"


void sort_by_gpa(Student *students,int x)
{
  int size=sizeof(students)/sizeof(Student);
  for (int i=0; i<size; i++)
  {
     for (int j=0; j < (size-i-1); j++){
          if (students[j].gpa>students[j+1].gpa){
                  Student temp=students[j];
                  students[j]=students[j+1];
                  students[j+1]=temp;
         }
    }
  }

  if(x==2)
  {
    Student *temp=calloc(size,sizeof(Student));
    for(int i=0;i<size;i++)
    {
      temp[i]=students[size-i-1];
    }
    *students=*temp;
    free(temp);
  }

}

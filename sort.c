#include<stdlib.h>
#include <string.h>
#include "lib/all-structs.h"
#include "lib/sort.h"
#include "lib/print.h"

void sort_subjects_by_string(Subject *subjects,int size)
{
   for (int i=0; i<size-1; i++)
   {
     for (int j=i+1; j < size; j++){

        if (strcmp(subjects[i].name,subjects[j].name)>0)
        {
                Subject temp=subjects[i];
                subjects[i]=subjects[j];
                subjects[j]=temp;
        }
      }
    }




}



void sort_by_string(Student *students,int x,int size,int xx)
{
 if(x==1)
 {
   for (int i=0; i<size-1; i++)
   {
     for (int j=i+1; j < size; j++){
        if(xx==1)
        {
          if (strcmp(students[i].id,students[j].id)>0)
          {
                  Student temp=students[i];
                  students[i]=students[j];
                  students[j]=temp;
          }
       }
       else if(xx==2)
       {
         if (strcmp(students[i].name,students[j].name)>0)
         {
                 Student temp=students[i];
                 students[i]=students[j];
                 students[j]=temp;
         }
      }
      else if(xx==3)
      {
        if (strcmp(students[i].faculty,students[j].faculty)>0)
        {
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
        }
      }
      else if(xx==4)
      {
        if (strcmp(students[i].major,students[j].major)>0)
        {
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
        }
      }
      else if(xx==6)
      {
        if (strcmp(students[i].contact,students[j].contact)>0)
        {
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
        }
      }
     }
   }
  }
  if(x==2)
  {
   for (int i=0; i<size-1; i++)
   {
     for (int j=i+1; j < size; j++){
       if(xx==1)
       {
         if (strcmp(students[i].id,students[j].id)<0)
         {
                 Student temp=students[i];
                 students[i]=students[j];
                 students[j]=temp;
         }
      }
      else if(xx==2)
      {
        if (strcmp(students[i].name,students[j].name)<0)
        {
                Student temp=students[i];
                students[i]=students[j];
                students[j]=temp;
        }
     }
     else if(xx==3)
     {
       if (strcmp(students[i].faculty,students[j].faculty)<0)
       {
               Student temp=students[i];
               students[i]=students[j];
               students[j]=temp;
       }
     }
     else if(xx==4)
     {
       if (strcmp(students[i].major,students[j].major)<0)
       {
               Student temp=students[i];
               students[i]=students[j];
               students[j]=temp;
       }
     }
      else if(xx==6)
      {
       if (strcmp(students[i].contact,students[j].contact)<0)
       {
               Student temp=students[i];
               students[i]=students[j];
               students[j]=temp;
       }
      }
     }
   }
  }


}

void sort_by_gpa(Student *students,int x,int size)
{

 if(x==1)
 {
   for (int i=0; i<size-1; i++)
   {
     for (int j=i+1; j < size; j++){
          if (students[i].gpa>students[j].gpa){
                  Student temp=students[i];
                  students[i]=students[j];
                  students[j]=temp;
         }
     }
   }
 }
 if(x==2)
 {
   for (int i=0; i<size-1; i++)
   {
     for (int j=i+1; j < size; j++){
          if (students[i].gpa<students[j].gpa){
            Student temp=students[i];
            students[i]=students[j];
            students[j]=temp;
         }
     }
   }
 }


}

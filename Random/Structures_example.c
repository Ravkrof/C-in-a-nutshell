// structure example
#include<stdio.h>
// global declaration
struct student
{
    int id;
    char name[20];
    float gpa;
};

int main()
{
   // int a[10];
  struct student s[50];
  int n;
  printf("\nEnter number of students :");
  scanf("%d",&n);
  for(int i=0; i<n; i++)
  {
      printf("\n Enter the details of %d student ; \n",i+1) ;
      scanf( "%d%s%f",&s[i].id,s[i].name,&s[i].gpa);
  }

  printf("\n Student Details\n");
  for(int i=0; i<n; i++ )
  printf("\n ID= %d \t NAME= %s \t GPA= %f\n",s[i].id,s[i].name,s[i].gpa);



}

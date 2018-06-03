#include<stdio.h>
struct Student
{
 int num;
 char name[20];
 float score;
};//×¢ÒâÕâ¸ö; 

int main()
{
  struct Student stu[5]={{10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",86},{10108,"Zhao",79},{10105,"Tu",88}};
  struct Student temp;
  int i,j;
  for(i=0;i<4;i++)
  for(j=i+1;j<5;j++)
  if(stu[i].score<stu[j].score) 
  {
  temp=stu[i];stu[i]=stu[j];stu[j]=temp;	
  }
  for(i=0;i<5;i++)
  printf("%5d  %8s   %5.2f\n",stu[i].num,stu[i].name,stu[i].score);
  printf("\n");
  return 0;
}

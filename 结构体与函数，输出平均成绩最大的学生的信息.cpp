#include<stdio.h>//此题不对，，有bug 
#define N 3//注意不加;有N个学生 
struct Student
{
	int num;
	char name[10];
	float score[3];
 };
int main()
{
  int i,j;
  float sum=0,m; 
  float max(float aver[],int N);//选出平均成绩最大的那个
  float aver[N];//有N个学生的平均成绩 
  struct Student stu[N];//定义结构体数组，有N个学生 
  for(i=0;i<N;i++)
  {
  scanf("%d %s",&stu[i].num,stu[i].name);
     for(j=0;j<3;j++)
     {
     scanf("%f",&stu[i].score[j]);//可以这样写？？ 
     sum=sum+stu[i].score[j];
     }
     aver[i]=sum/3;
  } 
  	m=max(aver,N);
  	printf("%d %s",stu[m].num,stu[m].name);
  	for(j=0;j<3;j++)
     {
     printf("%f",&stu[m].score[j]);
     }
     printf("%f",m);
  	return 0;
}
 float max(float aver[],int N)
{
 int i,j;
 int k=0;
 for(i=0;i<N;i++)
 {
 if(aver[i]>aver[k])
 k=i;
 }
return k; 
}
 

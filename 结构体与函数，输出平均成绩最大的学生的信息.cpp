#include<stdio.h>//���ⲻ�ԣ�����bug 
#define N 3//ע�ⲻ��;��N��ѧ�� 
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
  float max(float aver[],int N);//ѡ��ƽ���ɼ������Ǹ�
  float aver[N];//��N��ѧ����ƽ���ɼ� 
  struct Student stu[N];//����ṹ�����飬��N��ѧ�� 
  for(i=0;i<N;i++)
  {
  scanf("%d %s",&stu[i].num,stu[i].name);
     for(j=0;j<3;j++)
     {
     scanf("%f",&stu[i].score[j]);//��������д���� 
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
 

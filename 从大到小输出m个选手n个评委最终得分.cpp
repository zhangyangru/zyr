#include<stdio.h>
#define M 5 
#define N 5
//#define M 5 N 5//写一行不对，考虑把主函数写在最后面的情况 
int main()
{
	float sort_aver(float arr[][N],int x);//第一维可以不写，但高维必须写大小 
	float score[M][N],r[M];//r数组存放每位选手的最终得分,每位选手1个最终成绩 
	int i,j;//n个评委，即一个选手有n个成绩，不用再定义M N，最开头已经声明过了
	float t; //注意t应该定义为浮点型 
	for(i=0;i<M;i++)//m个选手 
	{
	  for(j=0;j<N;j++)//n个成绩 
	  scanf("%f",&score[i][j]); 
	  r[i]=sort_aver(score,i);//第i个学生的成绩 
    }
      for(i=0;i<M-1;i++)
      {
        for(j=i+1;j<M;j++)
        if(r[i]<r[j])
        {
        t=r[i];r[i]=r[j];r[j]=t;
        }
      }
      for(i=0;i<M;i++)
	  printf("%f\n",r[i]);
	return 0;
}
	
   float sort_aver(float arr[][N],int x) //把i传给x，把N传给N 
 {
 	float aver(float array[][N],int x);
 	int i,t,j;
 	float v;
    for(i=0;i<N-1;i++)
    {
      for(j=i+1;j<N;j++)
      if(arr[x][i]<arr[x][j])
      {
      t=arr[x][i];arr[x][i]=arr[x][j];arr[x][j]=t;
      }
    }
    v=aver(arr,x);
	return v;	
 }
 
 float aver(float array[][N],int x)
 {
 	int i;
    float average,sum=0;
    for(i=1;i<N-1;i++)
    sum=array[x][i]+sum;
  	average=sum/(N-2);
  	return average;
 }
 
 

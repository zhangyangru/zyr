#include<stdio.h>
#define M 5 
#define N 5
//#define M 5 N 5//дһ�в��ԣ����ǰ�������д����������� 
int main()
{
	float sort_aver(float arr[][N],int x);//��һά���Բ�д������ά����д��С 
	float score[M][N],r[M];//r������ÿλѡ�ֵ����յ÷�,ÿλѡ��1�����ճɼ� 
	int i,j;//n����ί����һ��ѡ����n���ɼ��������ٶ���M N���ͷ�Ѿ���������
	float t; //ע��tӦ�ö���Ϊ������ 
	for(i=0;i<M;i++)//m��ѡ�� 
	{
	  for(j=0;j<N;j++)//n���ɼ� 
	  scanf("%f",&score[i][j]); 
	  r[i]=sort_aver(score,i);//��i��ѧ���ĳɼ� 
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
	
   float sort_aver(float arr[][N],int x) //��i����x����N����N 
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
 
 

#define M 2
#define N 3
#include<stdio.h>
int main()
{
	int a[M][N],b[M][N],c[M][N];
	int i,j;
	printf("��������a��ֵ\n");
	for(i=0;i<M;i++)
	{
	  for(j=0;j<N;j++)
	  scanf("%d",&a[i][j]);
    }
    printf("��������b��ֵ\n"); 
	for(i=0;i<M;i++)
	{
	  for(j=0;j<N;j++)
	  scanf("%d",&b[i][j]);
    }
    printf("��Ӻ�ľ���Ϊ��\n");
	for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
	  {
      c[i][j]=a[i][j]+b[i][j];
      printf("%-3d ",c[i][j]);
      }
	  printf("\n");
    }
} 

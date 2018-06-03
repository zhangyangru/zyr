#define M 2
#define N 3
#include<stdio.h>
int main()
{
	int a[M][N],b[M][N],c[M][N];
	int i,j;
	printf("输入数组a的值\n");
	for(i=0;i<M;i++)
	{
	  for(j=0;j<N;j++)
	  scanf("%d",&a[i][j]);
    }
    printf("输入数组b的值\n"); 
	for(i=0;i<M;i++)
	{
	  for(j=0;j<N;j++)
	  scanf("%d",&b[i][j]);
    }
    printf("相加后的矩阵为：\n");
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

#define M 2
#define W 3
#define N 2 
#include<stdio.h>
int main()
{
	int a[M][W],b[W][N],i,j,p,q;
	int c[M][N]={0};//必须赋一个初值 
	printf("输入a数组的值\n");
	for(i=0;i<M;i++)
	  for(j=0;j<W;j++)
	  scanf("%d",&a[i][j]);
	  printf("输入b数组的值\n");
	for(i=0;i<W;i++)
	  for(j=0;j<N;j++)
	  scanf("%d",&b[i][j]);
	for(p=0;p<2;p++)
	{
      for(q=0;q<2;q++)
         for(i=0;i<3;i++) 
         c[p][q]=c[p][q]+a[p][i]*b[i][q];
    }
    printf("矩阵C为\n"); 
     for(i=0;i<2;i++)
     {
     for(j=0;j<2;j++)
      printf("%d ",c[i][j]);
      printf("\n");
     }
}

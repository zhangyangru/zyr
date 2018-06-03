#define M 3//3ÐÐ 
#define N 4//4ÁÐ 
#include <stdio.h>
void zz(int a[M][N],int b[N][M])
{
	int i,j;
	for(i=0;i<N;i++)
	{
	  for(j=0;j<M;j++)
      b[i][j]=a[j][i];
    }
}
int main()
{
	int a[M][N];
	int b[N][M];
	int i,j;
	for(i=0;i<M;i++)
	for(j=0;j<N;j++)
	scanf("%d",&a[i][j]);
	zz(a,b);
	for(i=0;i<N;i++)
	{
	for(j=0;j<M;j++)
	printf("%5d  ",b[i][j]);
	printf("\n");
    }
	return 0;
}


#define N 4
#define M 3
#include<stdio.h>
int main()
{
   int T(int a[M][N],int b[N][M]);
   int t[M][N]={{3,4,6,11},{2,5,8,19},{7,9,10,20}};
   int b[N][M];
   int i,j;
   T(t,b);
   for(i=0;i<N;i++)
   {
     for(j=0;j<M;j++)	
     printf("%5d",b[i][j]);
     printf("\n");
   }
	return 0;
}
    void T(int a[M][N],int b[N][M])//把t数组传下来 
    {
       int i,j;
	   for(i=0;i<N;i++)
	   {
	   	for(j=0;j<M;j++)
	   	b[i][j]=a[j][i];
	   }
	}

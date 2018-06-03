#include<stdio.h>
#define m 3
#define n 4 
int main()
{
	int i,j,k,t;
	int b[n][m];
	int a[m][n];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	 printf("%d  ",a[i][j]);
	 printf("\n");
    }
    printf("\n");
    for(i=0,j=m-1;i<j;i++,j--)
    {
       for(k=0;k<n;k++)
       {
       t=a[i][k];a[i][k]=a[j][k];a[j][k]=t;
       }
    }
    for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       b[j][i]=a[i][j];//×ªÖÃ 
    for(i=0;i<n;i++)
       {
       for(j=0;j<m;j++)
       printf("%3d  ",b[i][j]);
       printf("\n");
       }
	return 0;
 } 

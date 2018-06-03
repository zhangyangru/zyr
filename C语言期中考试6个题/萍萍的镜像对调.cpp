#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],n,m,i,j,t,k;
	while(scanf("%d*%d",&n,&m)!=EOF)
 {	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[j][i]=a[i][j];
                t=m/2;
	for(i=0;i<t;i++)
	for(j=0;j<n;j++)
	{
		k=b[i][j];
		b[i][j]=b[m-1-i][j];
		b[m-1-i][j]=k;
	}
	for(i=0;i<m;i++)
	{
	   for(j=0;j<n;j++)
                   printf("%4d",b[i][j]);
                   printf("\n");

	}
 }
return 0;
}


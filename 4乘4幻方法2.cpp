#include<stdio.h>
int main()
{
	int a[4][4];
	int i,j=0,m,n,p,q,k=1;
	for(i=0;i<2;i++)//i¿ÉÈ¡0 1 
	{
	  j=4-1-i;//j=3    j=2
	  for(p=i;p<=j;p++)
	    a[i][p]=k++;
	    k=k-1;
	  for(p=i;p<=j;p++)
	    a[p][j]=k++;
	    k=k-1;
	  for(p=j;p>=i;p--) 
	    a[j][p]=k++;
	    k=k-1;
	  for(p=j;p>=i+1;p--)
	    a[p][i]=k++;
    }
    for(i=0;i<4;i++)
    {
	for(j=0;j<4;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
    }
}

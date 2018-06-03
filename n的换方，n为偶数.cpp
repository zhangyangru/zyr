
#include<stdio.h>
int main()
{
	int i,j=0,n,p,k=1;
	int a[100][100];
	scanf("%d",&n);// ‰»Î6 
	for(i=0;i<n/2;i++)//iø…»°0 1 2 
	{
	  j=n-1-i;//j=5,4,3,i=1,i=2
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
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
    }
}	

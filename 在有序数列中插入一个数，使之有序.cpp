#define N 20
#include<stdio.h>
int main()
{
	int a[N]={1,3,6,8,9};
	int n=5,x,i,j;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	scanf("%d",&x);
	for(i=0;x>a[i]&&i<n;i++)
	{
	  for(j=n-1;j>=i;j--)
	  a[j+1]=a[j];
    }
	  a[i]=x;n++;
    for(i=0;i<n;i++) 
    printf("%d",a[i]);
 } 

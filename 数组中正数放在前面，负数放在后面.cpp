#include<stdio.h>
int main()
{
	int a[10];
	int b[10];
	int i,j=0,p=9;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
	  if(a[i]>0)
	     b[j++]=a[i];
      if(a[i]<0) 
      {
         b[p--]=a[i];
      }
    }
    for(i=0;i<10;i++)
    {
    a[i]=b[i];
    printf("%d  ",a[i]);
    }
	return 0;
 } 

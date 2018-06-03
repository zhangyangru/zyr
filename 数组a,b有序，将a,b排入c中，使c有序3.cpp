#include<stdio.h>
int main()
{
	int i,j,p;
	int a[5]={12,34,67,77,78};
	int b[4]={1,23,44,55};
	int c[9];
	  for(i=0;i<4;i++)
	     c[i]=b[i];
	  for(j=0;j<5;j++)
	  {
	    for(i=0;i<4+j;i++)
	    {
		  if(a[j]<c[i])
		   {
		     for(p=3+j;p>=i;p--)	
		     c[p+1]=c[p];	
		     c[i]=a[j];
		     break;
		   }
	    }
	    c[i]=a[j];
       }
       for(i=0;i<9;i++)
       printf("%d ",c[i]);
}

#include<stdio.h>
int main()
{
   int i,j,n=5,p;
   int a[10]={1,2,5,7,8};
   int x,m;
   scanf("%d",&m);/*准备插入数字的个数*/ 
     for(j=0;j<m;j++)
     {
     	scanf("%d",&x);
       for(i=n-1;i>=0;i--)
	   {    	
   	    if(x>a[i])
   	    {
   	      for(p=n-1;p>=(i+1);p--)
   	      a[p+1]=a[p];
          a[i+1]=x;
          break;
		} 
       if(x<a[0])
		{
		for(p=n-1;p>=i;p--)
		a[p+1]=a[p];
		 a[0]=x; 
		 break;
	    }
        n++;
	   }
     }
   for(i=0;i<n;i++)
   printf("%d",a[i]);
   printf("\n");
   return 0;
   }

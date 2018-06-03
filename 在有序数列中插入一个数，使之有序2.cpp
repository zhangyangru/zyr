#include<stdio.h>
int main()
{
   int i,j,n=5,p,q=0;
   char x[5];
   int a[10]={1,2,5,7,8};
   for(j=0;j<5;j++)
   {
     scanf("%c",&x[j]);
     if(x[j]!='\n')
	 q++;
     else
     break;
   }
     for(j=0;j<q;j++)
     {
       for(i=0;i<n;i++)
	   {    	
   	    if(x[j]>=a[i]&&x[j]<a[i+1])
   	    {
   	      for(p=n-1;p>=(i+1);p--)
   	      a[p+1]=a[p];
   	      break;
        }    
	   }
     a[i+1]=x[j];
     n++;
     }
   for(i=0;i<n;i++)
   printf("%c",a[i]);
   printf("\n");
   return 0;
}

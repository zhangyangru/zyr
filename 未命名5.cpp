#include<stdio.h>
int main()
{
	int a,t,p,i;
	scanf("%d",&a);//测试数据的组数
	for(i=0;i<a;i++) 
	{
		scanf("%d",&t);
		for(j=2;j<t;j++)
		  {
		   if(t%j==0)
		   break;
	      }
		   if(j=t)  
		   printf("%d 0\n",t);
		   if(j<t)
		   {
		   	for(i=t,j=t;;i++,j--)
		   	{
		   	  for(p=2;p<i||p<j;p++)
		      {
		        if(i%p==0)
		        break;
				if(j%p==0) 
				break; 
		      }
	        }
	
	
	
	
 } 

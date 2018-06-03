#include<stdio.h>
int a=3,b=5;
int main()
{
   int max(int a,int b);
   int a=8,c;
   c=max(a,b);
   printf("max=%d\n",c);
   return 0;
}
  int max(int a,int b)
  {
  	int c;
  	c=a>b?a:b;
  	return(c);
  }

#include<stdio.h>
int main()
{
	int f(int);
	int a=2,i,m;//自动局部变量 
	for(i=0;i<3;i++)
	{ 
	m=f(a);
	printf("%d\n",m);
	} 
	return 0;
}
   int f(int a)
   {
   auto int b=0;
   static int c=3;
   b=b+1;
   c=c+1;
   return (a+b+c);
   }

#include <stdio.h>
int power(int n,int x);
int main()
{
	int n,x;
	int i;
	scanf("%d %d",&n,&x);
	printf("%d",power(n,x));
	return 0;
}
int power(int n,int x)
{
	int f;
	if(n==0)
	f=1;
	else if(n>0)
	f=x*power(n-1,x);
	return f;
}

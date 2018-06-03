#include <stdio.h>
int main()
{
    int max(int,int);
	int min(int,int);
	int(*p)(int,int);
	int a,b,c,n;
	scanf("%d,%d",&a,&b);
	scanf("%d",&n);//ÊäÈë1»ò2
	if(n==1)
	p=max;
	else
	p=min;
	c=(*p)(a,b);
	if(n==1)
    printf("max=%d\n",c);
    else
    printf("min=%d\n",c);
    return 0;
}
int max(int x,int y)
{
	int z;
	if(x>y)
	z=x;
	else
	z=y;
	return(z);	
}
int min(int x,int y)
{
	int z;
	if(x<y)
	z=x;
	else
	z=y;
	return z;
}

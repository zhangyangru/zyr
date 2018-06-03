#include<stdio.h>
int main()
{
	int i,j,a[11],x,p;
	for(i=0;i<11;i++)
	scanf("%d",&a[i]);
	while((scanf("%d",&x))!=EOF)
	{
		p=0;
		for(i=0;i<10;i++)
		p=(p+a[i])*x;
		p=p+a[10];
		printf("%d\n",p);
	}
	return 0;
}

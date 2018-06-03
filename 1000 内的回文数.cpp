#include<stdio.h>
int main()
{
	int i,t,s,m,n;
	for(i=0;i<=9;i++)
	printf("%d ",i);
	printf("\n");
	for(i=10;i<=99;i++)
	{
	t=i/10;
	s=i%10;
	if(t==s)
	printf("%d  ",i);	
	}
	printf("\n");
	for(i=100;i<999;i++)
	{
    t=i/100;
    s=(i%100)%10;
    if(t==s)
    printf("%d  ",i);
    }
    for(i=1000;i<9999;i++)
    {
    t=i/1000;
    s=(i%1000)/100;
    m=((i%1000)%100)/10;
    n=((i%1000)%100)%10;
    if(t==n&&s==m)
    printf("%d  ",i);
    }
    printf("\n");
    return 0;
}

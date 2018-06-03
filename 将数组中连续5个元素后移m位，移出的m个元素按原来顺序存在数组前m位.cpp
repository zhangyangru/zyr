#include<stdio.h>
int main()
{
	int a[15]={15,11,32,19,44,56,90,78,2,10};
	int i,j,m,n;
	//scanf("%d",&n);//从第几个数开始移动 
	scanf("%d",&m);//移动的位数 
	for(i=9;i>=0;i--) 
	a[i+m]=a[i];
    for(i=10;i<(10+m);i++)
	a[i-10]=a[i];
	for(i=0;i<10;i++) 
	printf("%d  ",a[i]);
	return 0;
} 

#include<stdio.h>
int main()
{
	int a[15]={15,11,32,19,44,56,90,78,2,10};
	int i,j,m,n;
	int *p; 
	scanf("%d",&m);//移动的位数 
	for(p=(a+9);p>=a;p--) //for(i=9;i>=0;i--) 
	{
//	p+m=p;//不能直接这样写，会编译错误，把一个地址赋给另一个地址 
	*(p+m)=*p;//a[i+m]=a[i]
    }
    for(p=(a+10);p<(a+10+m);p++)//for(i=10;i<(10+m);i++)
	*(p-10)=*p;//a[i-10]=a[i]
	for(p=a;p<(10+a);p++) //for(i=0;i<10;i++)
	printf("%d  ",*p);//printf("%d  ",a[i])
	return 0;
} 

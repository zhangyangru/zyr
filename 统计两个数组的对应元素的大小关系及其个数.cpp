#include <stdio.h>
int num(int *p1,int *p2);
int main()
{
	int m[10]={12,23,34,45,56,67,78,89,90,10};
	int n[10]={11,23,35,54,67,77,45,88,92,10};
	int *p1,*p2,i,j,p=0,q=0,r=0,k;
	p1=m;
	p2=n;
	for(p1=m,p2=n;p1<(m+10)&&p2<(n+10);p1++,p2++)
	{
	k=num(p1,p2);//定义的参数是指针变量，只能将指针变量传给形参，而不能写成*p，即不能写成指针变量所指的元素值 
	if(k==0)//>
	p++;
	else if(k==1)//<
	q++;
	else if(k==2)//=
	r++;
    }
    printf("a[i]>a[j]的次数是：%d\n",p);
	printf("a[i]<a[j]的次数是：%d\n",q);
	printf("a[i]=a[j]的次数是：%d\n",r);
	return 0;
}
int num(int *p1,int *p2)
{
	if(*p1>*p2)
	return 0;
	else if(*p1<*p2)
	return 1;
	else if(*p1==*p2)
	return 2;
}


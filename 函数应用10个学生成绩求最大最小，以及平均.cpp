#include<stdio.h>
int Max,Min;//定义全局变量 ,各函数都可以直接引用它们，也可以向他们赋值 
int main()
{
	float average(int a[],int n); //形参的类型可以和函数类型不一致 
	int a[10]={1,2,3,4,5,6,7,8,9,10},n;
	float v;
	v=average(a,10);//直接写成10，主调函数将实参的值传递给形参 
	printf("Max=%d\n Min=%d\n average=%.1f\n",Max,Min,v);
	return 0;
}
    float average(int a[],int n)
   {
   	int i;
   	float v,sum=0;
   	Max=a[0];
   	Min=a[0];
   	for(i=0;i<n;i++)
   	{
   	if(Max<a[i])
   	Max=a[i];
   	if(Min>a[i])
   	Min=a[i];
    }
    for(i=0;i<n;i++)
   	sum=sum+a[i];
   	v=sum/n;
   	return v;
   }

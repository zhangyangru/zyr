#include<stdio.h>
int Max,Min;//����ȫ�ֱ��� ,������������ֱ���������ǣ�Ҳ���������Ǹ�ֵ 
int main()
{
	float average(int a[],int n); //�βε����Ϳ��Ժͺ������Ͳ�һ�� 
	int a[10]={1,2,3,4,5,6,7,8,9,10},n;
	float v;
	v=average(a,10);//ֱ��д��10������������ʵ�ε�ֵ���ݸ��β� 
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

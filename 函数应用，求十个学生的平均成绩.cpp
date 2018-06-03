#include<stdio.h>
int main()
{
	float average(int a[],int n);
	int score1[10]={90,88,67,78,99,94,80,88,89,70};
	float aver1,aver2;
	int score2[5]={98,97,91,60,55};
	aver1=average(score1,10);//调用average函数，用数组名作为函数的实参 
	aver2=average(score2,5);
	printf("1班平均成绩为%.2f\n2班的平均成绩%.2f\n",aver1,aver2);
	return 0;	
}
    float average(int a[],int n)//定义函数 
    {
    	int i;
    	float sum=0,aver;
    	for(i=0;i<n;i++)
    	sum=sum+a[i];
    	aver=sum/n;
    	return(aver);
	}

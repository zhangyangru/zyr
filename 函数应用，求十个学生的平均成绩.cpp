#include<stdio.h>
int main()
{
	float average(int a[],int n);
	int score1[10]={90,88,67,78,99,94,80,88,89,70};
	float aver1,aver2;
	int score2[5]={98,97,91,60,55};
	aver1=average(score1,10);//����average����������������Ϊ������ʵ�� 
	aver2=average(score2,5);
	printf("1��ƽ���ɼ�Ϊ%.2f\n2���ƽ���ɼ�%.2f\n",aver1,aver2);
	return 0;	
}
    float average(int a[],int n)//���庯�� 
    {
    	int i;
    	float sum=0,aver;
    	for(i=0;i<n;i++)
    	sum=sum+a[i];
    	aver=sum/n;
    	return(aver);
	}

#include<stdio.h>
int main()
{
    int number(int a[],int m);//��Ҫ��˼����ʼΪʲô������ 
    int i,k,a[30],m;
    for(i=0;i<30;i++)
	scanf("%d",&a[i]);
    k=number(a,30);//���ܷ��صĳɼ��и���ƽ���ɼ������� 
	printf("�ɼ�����ƽ���ɼ�������Ϊ��%d",k);
	return 0;
}
    int number(int a[],int m)
    {
      int i,t=0;
	  float sum=0;
      float aver;
      for(i=0;i<m;i++)
      sum=sum+a[i];
      aver=sum/m;
      for(i=0;i<m;i++)
      {
        if(a[i]>aver)
        t++;
      }
      return t;
	}

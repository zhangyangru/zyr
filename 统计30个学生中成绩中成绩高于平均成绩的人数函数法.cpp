#include<stdio.h>
int main()
{
    int number(int a[],int m);//需要再思考开始为什么做不对 
    int i,k,a[30],m;
    for(i=0;i<30;i++)
	scanf("%d",&a[i]);
    k=number(a,30);//接受返回的成绩中高于平均成绩的人数 
	printf("成绩高于平均成绩的人数为：%d",k);
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

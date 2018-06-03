#include <stdio.h>
int i,j;//定义全局变量来接收下标 
int max(int a[4][4],int **p1);//为什么是**p1?? 
int min(int a[4][4],int **p2);
int main()
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int *p1,*p2;
    p1=&a[0][0];//找最大的数 
    p2=&a[0][0];//找最小的数 
    max(a,&p1);//用指针传地址 ，为什么不是p？ 
    printf("最大的数是：%d   其下标为：%d , %d",*p1,i,j);
    printf("\n");
    min(a,&p2);//用指针来传地址，为什么不是p？ 
    printf("最小的数是: %d   其下标为：%d , %d",*p2,i,j);
	return 0;
} 
    int max(int a[4][4],int **p1)
    {
       int m,n;
       int v=0,u=0;
        for(m=0;m<4;m++)
        {
          for(n=0;n<4;n++)
          if(a[m][n]>a[u][v])
          {
      	  u=m,v=n;
          }
        }
         *p1=&a[u][v];//把最大的数赋给了第一个元素 
        i=u;
		j=v; 
   	} 
	int min(int a[4][4],int **p2)
	{ 
	 int m,n,v=0,u=0;
        for(m=0;m<4;m++)
        {
          for(n=0;n<4;n++)
          if(a[m][n]<a[u][v])
          {
      	  u=m,v=n;
          }
        }
        *p2=&a[u][v];//把最小值赋给了第一个元素 
        i=u;
		j=v; 
	}

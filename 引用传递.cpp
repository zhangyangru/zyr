#include<stdio.h>
int main()
{
    void swap(int *p1,int *p2);//空类型
	int x,y;
	int *p1,*p2;//需要重新定义指针变量*p1,*p2 
	scanf("%d %d",&x,&y);
	p1=&x;
	p2=&y;
	if(x>y)
	swap(p1,p2);
	printf("%d %d",x,y);
//	printf("%d %d",*p1,*p2);//也可以这样写 
}
    void swap(int *p1,int *p2)//函数调用结束后，形参p1和p2释放 
	{
		int t;
		t=*p1;*p1=*p2;*p2=t;
	}	

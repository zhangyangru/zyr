#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{//argc:命令行参数的个数，每个参数均为字符串常量 
     //*argv[]:命令行参数的字符指针数组 
	int a,b;
	
//	scanf("%c",&argv[2]);
//	scanf("%c",&argv[3]);
    a=atoi(argv[1]);
	b=atoi(argv[3]);
	switch(argv[2][0])
	{
	case'+':printf("%d\n",a+b);break;
	case'-':printf("%d\n",a-b);break;
	case'*':printf("%d\n",a*b);break;
	case'/':if(b!=0)
	{
	printf("%d\n",a/b);break;
    }
	else 
	{
	printf("除数不能为0");break;
    }
	default:printf("计算出错\n");
    }
}

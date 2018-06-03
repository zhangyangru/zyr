#include <stdio.h>
int main()
{
    int fun(int x,int y,int(*p)(int,int)); 
	int max(int,int);//max的函数声明 
	int min(int,int);//min的函数声明 
	int add(int,int);//add的函数声明 
	int a=34,b=-21,n;
	printf("please choose 1,2or3:");
	scanf("%d",&n);
	if(n==1)
	fun(a,b,max);//将a,b,传给fun函数的形参x,y将函数名max作为实参将其入口地址传送给fun函数的行参p 
	else if(n==2)
	fun(a,b,min);//把函数的入口地址传递给形参 
	else if(n==3)
	fun(a,b,add);//实参是函数名 
	return 0;
} 
	int fun(int x,int y,int(*p)(int,int))//函数fun的形参p 在函数fun未被调用时不占内存单元，也不指向任何函数  
	{//在被调用的函数中使用实参函数 
	  int result;
	  result=(*p)(x,y);//调用所需的函数,x和y是实参,改成a,b不对，为什么？ 
	  printf("%d\n",result);//(*p)(x,y)就相当于max(x,y)或min(x,y)或。。。 
    }
   	int max(int x,int y)
{
	int z;
	if(x>y)
	z=x;
	else
	z=y;
	return(z);	
}
int min(int x,int y)
{
	int z;
	if(x<y)
	z=x;
	else
	z=y;
	return z;
}
    int add(int x,int y)
	{int z;
	z=x+y;
	printf("sum=");
	return z;
	}	
    	
    	


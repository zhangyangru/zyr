#include <stdio.h>
int main()
{
    int fun(int x,int y,int(*p)(int,int)); 
	int max(int,int);//max�ĺ������� 
	int min(int,int);//min�ĺ������� 
	int add(int,int);//add�ĺ������� 
	int a=34,b=-21,n;
	printf("please choose 1,2or3:");
	scanf("%d",&n);
	if(n==1)
	fun(a,b,max);//��a,b,����fun�������β�x,y��������max��Ϊʵ�ν�����ڵ�ַ���͸�fun�������в�p 
	else if(n==2)
	fun(a,b,min);//�Ѻ�������ڵ�ַ���ݸ��β� 
	else if(n==3)
	fun(a,b,add);//ʵ���Ǻ����� 
	return 0;
} 
	int fun(int x,int y,int(*p)(int,int))//����fun���β�p �ں���funδ������ʱ��ռ�ڴ浥Ԫ��Ҳ��ָ���κκ���  
	{//�ڱ����õĺ�����ʹ��ʵ�κ��� 
	  int result;
	  result=(*p)(x,y);//��������ĺ���,x��y��ʵ��,�ĳ�a,b���ԣ�Ϊʲô�� 
	  printf("%d\n",result);//(*p)(x,y)���൱��max(x,y)��min(x,y)�򡣡��� 
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
    	
    	


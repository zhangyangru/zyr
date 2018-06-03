#include<stdio.h>	
int main()
{
	int a[10];
	int b[10];//可以不赋初值0，值为任意的 
	int i,j=9,*p1;//整型指针变量
	p1=a;//p1指向a数组的开头  
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);//跳出循环i=10 
	i=0;
	for(p1=a;p1<(a+10);p1++)//for(i=0;i<10;i++) 
	{
	    if(*p1>=0)//if(a[i]>0)
	    {
	    	*(b+i)=*p1;//b[j++]=a[i];j是从0开始的 
	    	i++;
	    }
	    else
		if(*p1<0)//if(a[i]<0) 
	    {
	       *(b+j)=*p1;	//b[p--]=a[i],p从9开始 
		   j--;	
	    }
    }
    for(p1=a,i=0;p1<(a+10)&&i<10;p1++,i++) //for(i=0;i<10;i++) 
	{	
		*p1=b[i];//a[i]=b[i]
	//	p1=&b[i];//为什么这样写不对？p1已经指向了b数组，所以循环判断应该改为p1<(b+10)就是对的 
	 	printf("%d  ",*p1);//printf("%d",a[i])
    }
    return 0;
 } 

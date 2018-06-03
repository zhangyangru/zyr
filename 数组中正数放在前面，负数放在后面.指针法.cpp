#include<stdio.h>
int main()
{
	 int a[10];
	 int b[10];//可以不赋初值0，值为任意的 
	 int i,j=9,*p1,*p2;//整型指针变量
	 p2=b+9; //p2指向b数组的末尾 
	 p1=b;//p1指向b数组的开头  
	 for(i=0;i<10;i++)
	 scanf("%d",&a[i]);//跳出循环i=10 
	 for(i=0;i<10;i++)
	 {
	    if(a[i]>=0)
	    {
	    	//	p2=p1; //不能这样写，将一个地址赋给另一个地址 
	    	*p1=a[i];
	    	p1++;
	    }
	    else
		if(a[i]<0)
	    {		
		  *p2=a[i];
		  p2--;
	    }
      }
	for(i=0,p1=b;i<10&&p1<(b+10);i++,p1++)
	{
	 a[i]=*p1;
	 printf("%d  ",a[i]);
    }
    return 0;
 } 
 

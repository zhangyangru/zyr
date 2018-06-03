#include<stdio.h>
void sort(int * a[],int n);//函数名sort,无返回值,有两个参数,一个是指针数组,该数组名是a，有n个数组元素，每个元素指向一个整型变量。 
int main()
{
	int n;
	int i;
	scanf("%d",&n);//有n个整数 
	//int b[n];//定义一个整型数组,有n个元素,可以这样子写吗?不能
	int b[10]; 
	int * c[10];//定义指针数组 
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
//	int * c[n]={&b[0],&b[1],&b[2],&b[3],&b[4]};
    for(i=0;i<n;i++)
    c[i]=&b[i];//可以这样通过循环方式给指针数组赋值吗？ 
	sort(c,n);//调用时直接写数组名 
	for(i=0;i<n;i++)
	{
		printf("%d",**(c+i));
    } 
	return 0;
 } 
    void sort(int * a[],int n)
    {
    	int i,j;
    	int **p1;//p1是（指向整形指针变量的） 指针变量 
    	int **p2; 
    	int *p;//定义一个指针即可，p的值是整形数组的地址 
   	    for(p1=a;p1<(a+n-1);p1++)//p的值是&a[0] 
   	    {
   	       for(p2=(p1+1);p2<(a+n);p2++)//注意不要写成p2=a+1 
   	       if((**p1)>(**p2))
   	       {
           p=*p1;*p1=*p2;*p2=p;//交换的是整形数组元素的地址  
       	   }
        }
    } 

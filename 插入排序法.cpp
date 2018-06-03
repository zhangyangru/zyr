#include <stdio.h>
int main()
{
	int a[6]={94,83,57,74,7,28};
	int temp,i,j;
	for(i=1;i<6;i++)//大的循环是5次循环 
	{
      temp=a[i];
      for(j=i;j>0&&temp<a[j-1];j--)//j是在每轮大的循环中比较的次数 
     {
	  a[j]=a[j-1] ;
     }
      a[j]=temp;
      printf("%d ",a[j]);
    }
}

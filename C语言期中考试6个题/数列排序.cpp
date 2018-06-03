#include <stdio.h>
int main()
{
	int a[20];
	int n,i,j,t,k;
	while(scanf("n=%d",&n)!=EOF)
{
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
//如果想随机地输入n个数，，不提前指定输入的个数，，怎么输？
	for(i=0;i<n-1;i++)
	{ 
	 for(j=i+1;j<n;j++)
     if(a[i]<a[j])
     {
     t=a[i];a[i]=a[j];a[j]=t;
     }
    }
//    for(i=0;i<n-1;i++)
//    {
//      if(a[i]<a[i+1])
//      printf("%d ",a[i]);
//    }
//    printf("%d",a[n-1]);//第一种查重的方法


         /*  for(i=0;i<n;i++)
            {
      	      if(a[i]<a[i+1])
      	      printf("%d ",a[i]);
	        }为什么写成这样也是对的？*/ 

         for(i=0;i<n-1;i++)
         {
		   for(j=i+1;j<n;j++)
		   {
              if(a[i]==a[j])
              {
               for(k=j;k<n-1;k++)
               a[k]=a[k+1];
               n--;
              }
	       }
         }
         for(i=0;i<n;i++)
         printf("%d ",a[i]);//第二种查重的方法 
         //第三种查重的方法是：以第一个为目标，从头到尾查重，再以第二个为目标，从第二个开始到尾查重 
         //去掉重复的，数组长度减少（完善第三种方法） 
	return 0; 
}
}

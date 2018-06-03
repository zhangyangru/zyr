#include<stdio.h>
int main()
{
   int a[2][3],i,j;
   for(i=0;i<2;i++)
   { 
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);//可以在一行输入6个数字，中间用空格隔开也可以在一行先输入3个按回车在第二行再输入3个数字 
   }
   for(i=0;i<2;i++)	
	for(j=0;j<3;j++)
	printf("%d",a[i][j]);
	return 0;
	
}

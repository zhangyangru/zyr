#include<stdio.h>
int main()
{
	int max(int a[][4]);//对形参数组定义时，一维的大小可以不写或是与实参不同 
	int b[3][4],m;
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	scanf("%d",&b[i][j]);
	m=max(b);//直接调用数组名，应该是b不是a，应该与主函数中重新定义的数组名保持一致 
	printf("矩阵中的最大的数是:%d",m);
	return 0;
} 
    int max(int a[][4])
	{
	   int i,j,m; 
	   m=a[0][0];
	   for(i=0;i<3;i++)
	   {	
	    for(j=0;j<4;j++)
	    {
	    if(a[i][j]>m)
	    m=a[i][j];
	    }
	   }	
	   return m;
    }

#include<stdio.h>
int main()
{
   int a[2][3],i,j;
   for(i=0;i<2;i++)
   { 
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);//������һ������6�����֣��м��ÿո����Ҳ������һ��������3�����س��ڵڶ���������3������ 
   }
   for(i=0;i<2;i++)	
	for(j=0;j<3;j++)
	printf("%d",a[i][j]);
	return 0;
	
}

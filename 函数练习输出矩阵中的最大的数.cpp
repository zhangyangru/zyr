#include<stdio.h>
int main()
{
	int max(int a[][4]);//���β����鶨��ʱ��һά�Ĵ�С���Բ�д������ʵ�β�ͬ 
	int b[3][4],m;
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	scanf("%d",&b[i][j]);
	m=max(b);//ֱ�ӵ�����������Ӧ����b����a��Ӧ���������������¶��������������һ�� 
	printf("�����е���������:%d",m);
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

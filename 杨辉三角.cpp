#include<stdio.h>
int main()
{
	int a[4][4],i,j;
	for(i=0;i<4;i++)
	{
	a[i][0]=1;a[i][i]=1;
    }
	for(i=0;i<4;i++)
	{
	  for(j=1;j<=i-1;j++)
	   a[i][j]=a[i-1][j-1]+a[i-1][j];
	  for(j=0;j<=i;j++) 
	   printf("%d",a[i][j]);
	   printf("\n");//����������ֵ����һ����ѭ�������˲��衣 
    }
   // for(i=0;i<4;i++)
    //{
//	for(j=0;j<=i;j++) 
//	{  
   // printf("%d",a[i][j]);
//	}
//	printf("\n");
  //  }//���Ե�����ѭ����� 
}

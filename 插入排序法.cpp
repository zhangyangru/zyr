#include <stdio.h>
int main()
{
	int a[6]={94,83,57,74,7,28};
	int temp,i,j;
	for(i=1;i<6;i++)//���ѭ����5��ѭ�� 
	{
      temp=a[i];
      for(j=i;j>0&&temp<a[j-1];j--)//j����ÿ�ִ��ѭ���бȽϵĴ��� 
     {
	  a[j]=a[j-1] ;
     }
      a[j]=temp;
      printf("%d ",a[j]);
    }
}

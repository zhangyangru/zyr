#include<stdio.h>
int main()
{
	char a[10],c;/*int Ҳ����*/ 
	int i,j; 
	for(i=0;i<10;i++)
//	scanf("%c",&a[i]);/*ע�����Ҫ��������,�м䲻���пո�*/ 
    a[i]=getchar();
	for(i=0;i<9;i++) 
	for(j=i+1;j<10;j++)
	if(a[i]>a[j])
	{
	c=a[i];a[i]=a[j];a[j]=c;
    }
	for(i=0;i<10;i++)
	 printf("%c",a[i]);
	 return 0;/*�ɼ��������Ҳ������ABCDE��˳�����������������ʱ������Ascall����������*/ 
}

#include <stdio.h> 
void sort(char c[],int n);//����ĺ���
int main()
{
	void (*p)(char c[],int n);//ָ������ָ�룬�������ĳһ��������ʼ��ַ��ָ��ĺ������������� 
	int i,n=10;
	char c[10];
	for(i=0;i<n;i++)
	scanf("%c",&c[i]);
	p=sort;
	(*p)(c,10);
	return 0;
}
void sort(char c[],int n)
{
	int i,j;
	char t;
	for(i=1;i<n;i++)
   {
   	 t=c[i];
     for(j=i;j>0&&t<c[j-1];j--)
      {
	    c[j]=c[j-1];
      }
      c[j]=t;
   }
   for(i=0;i<n;i++)
   printf("%c ",c[i]);
}

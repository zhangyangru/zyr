#include <stdio.h> 
void sort(char c[],int n);//排序的函数
int main()
{
	void (*p)(char c[],int n);//指向函数的指针，用来存放某一函数的起始地址，指向的函数类型是整形 
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

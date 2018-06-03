#include<stdio.h>
#include<string.h>
//void sort(char * name[],int n);//排序字符串 
//void print(char * name[],int n);//输出字符串 
int main()
{
	void sort(char * name[],int n);//排序字符串 
    void print(char * name[],int n);//输出字符串 
	char * name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};//用字符串对指针数组初始化 
    int n=5;//对5个字符串进行排序
	sort(name,n);
	print(name,n);
	return 0; 
}
void sort(char * name[],int n)
{
	char *temp;//定义一个指针变量
	int i,j;
	for(i=0;i<n-1;i++)
	{
	  for(j=i;j<n;j++)
	  if(strcmp(name[i],name[j])>0)
	  {
	  	temp=name[i];
	  	name[i]=name[j];
	    name[j]=temp;
	  }
    }
}
void print(char * name[],int n)
{
    int i;
	for(i=0;i<n;i++)
	printf("%s\n",name[i]);
}

#include<stdio.h>
#include<string.h>
//void sort(char * name[],int n);//�����ַ��� 
//void print(char * name[],int n);//����ַ��� 
int main()
{
	void sort(char * name[],int n);//�����ַ��� 
    void print(char * name[],int n);//����ַ��� 
	char * name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};//���ַ�����ָ�������ʼ�� 
    int n=5;//��5���ַ�����������
	sort(name,n);
	print(name,n);
	return 0; 
}
void sort(char * name[],int n)
{
	char *temp;//����һ��ָ�����
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

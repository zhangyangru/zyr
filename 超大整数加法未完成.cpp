#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	char c[100],t[100];//c�洢�ӷ������Ľ��,t�������� 
	int i,j,m,n,k;
	scanf("%s",&a);
	scanf("%s",&b);
	m=strlen(a);//ֻ�Ǽ�����Ч�ַ��ĳ��� 
  	k=n=strlen(b); 
	if(m>k)
	k=m; //kΪa��b�ַ������ȵĽϴ�ֵ 
	if(n==m)
	{
	   if(strcmp(a,b)<0)
	  {
	    strcpy(t,a);strcpy(a,b);strcpy(b,t);
      }
	}
	if(n>m)
	{
	strcpy(t,a);strcpy(a,b);strcpy(b,t);
    }
	for(i=k-1,j=0;i>=0,j<m;i--,j++)//��һ���Ȳ��������λ��λ����� 
	a[i]=a[m-1-j];
	for(i=k-1,j=0;i>=0,j<m;i--,j++)
	b[i]=b[n-1-j];
	for()
		
		
		
		
		
	
	}
	
	
	
		
 } 

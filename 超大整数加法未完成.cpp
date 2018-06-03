#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	char c[100],t[100];//c存储加法运算后的结果,t用来交换 
	int i,j,m,n,k;
	scanf("%s",&a);
	scanf("%s",&b);
	m=strlen(a);//只是计算有效字符的长度 
  	k=n=strlen(b); 
	if(m>k)
	k=m; //k为a和b字符串长度的较大值 
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
	for(i=k-1,j=0;i>=0,j<m;i--,j++)//第一遍先不考虑最高位进位的情况 
	a[i]=a[m-1-j];
	for(i=k-1,j=0;i>=0,j<m;i--,j++)
	b[i]=b[n-1-j];
	for()
		
		
		
		
		
	
	}
	
	
	
		
 } 

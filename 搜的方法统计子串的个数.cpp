#include<stdio.h>
int main()
{
	int n=0,i,j,f=0;
	char a[100],b[100];
	gets(a);
	gets(b);
	for(i=0;a[i];i++)
	{
	f=1;
	for(j=0;b[j]&&f;j++)
		{
			if(a[i+j]==0)//如果该字符是空字符即'\0' 
			f=0;
			if(a[i+j]!=b[j])
			f=0;
		}
		if(f==1)
		n++;
	}
	printf("%d",n); //需看懂 
}

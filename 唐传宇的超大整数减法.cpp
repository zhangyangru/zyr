#include<stdio.h>
#include<string.h>
int main()
{
	char a[201],b[201];
	int i,j,k,m,n;
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	k=n;
	if(m>k) k=m;//k等于较大的字符串的长度 
	a[k+1]=0;
    for(i=0;i<k;i++) a[k-i]=a[m-i-1];
    for(i=0;i<=k-m;i++) a[i]='0';
    for(i=0;i<k;i++) b[k-i]=b[n-i-1];
    for(i=0;i<=k-n;i++) b[i]='0';
    j=0;
    for(i=0;i<k;i++)
    {
    	j=(a[k-i]-b[k-i]-j);
    	if(j<0)
    	{
    		a[k-i]=10+j+48;
		}
		else
    	a[k-i]=j%10+48;
    	if(j>0)
    	j=j/10;
    	else
    	j=-j;
	}
	if(a[0]=='0') printf("%s\n",a+1);
	else printf("%s\n",a);
} 


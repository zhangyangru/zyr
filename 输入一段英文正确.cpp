#include<stdio.h>
#define M 1000
#define N 20 
#include<string.h>
int main(void)
{
	char str1[M][N];
	char str2[M],y[M];
	int i=0,j=0,k=0,t=0,x=0;
	int strC[M],w,b,m,q,l;
	gets(str2);
	t=strlen(str2)+1;
	while(j<t)
	{
		for(;str2[j]==32;j++);
		while(k<N&&str2[j]!=32)
		str1[i][k++]=str2[j++];
		str1[i][k]='\0';
		strC[i]=1;
		for(x=0;x<i;x++)
		{
			if(strcmp(str1[i],str1[x])==0)
			{
				strC[x]++;
				i--;
				break;
			}
		}
		i++;
		l=i;
		k=0;
	}
	for(w=0;w<i-1;w++)
	{
	for(b=w+1;b<i;b++)
  	{
		if(strcmp(str1[w],str1[b])>0)
		{
			strcpy(y,str1[b]);
			strcpy(str1[b],str1[w]);
			strcpy(str1[w],y);
			q=strC[w];
			strC[w]=strC[b];
			strC[b]=q;
		}}
	}
		for(i=0;i<l;i++)
		printf("%s:%d\n",str1[i],strC[i]);
 } 




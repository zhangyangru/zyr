#include <stdio.h>
#include <string.h>
int main()//acm上显示超时
{
	int i,j,n=0,word=-1,p,q=0;
	int m;
	char b[1][15];
	char c[50][15];//一行最多存50个单词，每个单词最多15个字母
	char a[80];//一行最多80个字符
	while(gets(a)!=NULL)
{
	for(i=0;a[i];i++)
	{
		if((a[i]<'A')||(a[i]>'Z'&&a[i]<'a')||(a[i]>'z'))
		a[i]=' ';
		if(a[i]<='Z'&&a[i]>='A')
		a[i]=a[i]+32;
	}
	  for(i=0;a[i];i++)
	  {
	  	if(a[i]==' ')
	  	{
		  n=0;
	    }
	    else if(n==0)
	    {
	    	q=0;
			n=1;
			word++;
			for(p=i;a[p]!=' ';p++)
			c[word][q++]=a[p];
			c[word][q]='\0';//跳出循环时在末尾赋上结束符
		}
	  }
	  for(i=1;i<=word;i++)
	  {
	  for(j=0;c[i][j];j++)
	 // printf("%s",c[i]);//这种输出是错的..为什么？?
	  printf("%c",c[i][j]);
	  printf("\n");
      }

	   for(i=0;i<word-1;i++)
	   for(j=i+1;j<word;j++)
	{
		if(strcmp(c[i],c[j])>0)
		{
		  strcpy(b[0],c[i]);
		  strcpy(c[i],c[j]);
		  strcpy(c[j],b[0]);
	    }
	}
	for(i=0;i<word;i++)
	{
		if(strcmp(c[i],c[i+1])<0)
		printf("%s  ",c[i]);
	}
	printf("%s",c[word]);
	printf("\n");
}
	return 0;
}

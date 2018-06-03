#include <stdio.h>
int main()
{
	int i,j,n=0,word=-1,p,q=0;
	char a[80];
	char c[50][15];
	gets(a);
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
			for(p=i;a[p]!=' '&&a[p]!='\0';p++)
			c[word][q++]=a[p];
			c[word][q]='\0';//跳出循环时在末尾赋上结束符
		}
	  }
	  printf("%d",word);
	  for(i=0;i<=word;i++)
	  {
	  for(j=0;c[i][j];j++)
	  printf("%c",c[i][j]);
	  printf("\n");
      }
}

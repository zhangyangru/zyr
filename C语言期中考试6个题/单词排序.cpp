#include <stdio.h>
#include <string.h>
int main()//acm����ʾ��ʱ
{
	int i,j,n=0,word=-1,p,q=0;
	int m;
	char b[1][15];
	char c[50][15];//һ������50�����ʣ�ÿ���������15����ĸ
	char a[80];//һ�����80���ַ�
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
			c[word][q]='\0';//����ѭ��ʱ��ĩβ���Ͻ�����
		}
	  }
	  for(i=1;i<=word;i++)
	  {
	  for(j=0;c[i][j];j++)
	 // printf("%s",c[i]);//��������Ǵ��..Ϊʲô��?
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

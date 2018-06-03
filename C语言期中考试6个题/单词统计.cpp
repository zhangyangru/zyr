#include <stdio.h>
int main()
{
	char c[80];
	int i,n=0,word=0;
    while(gets(c)!=NULL)//末尾自动加一个'\0'
{
	n=0;//注意将n置0
	word=0;
	for(i=0;c[i];i++)
	{
	  if(c[i]==' ')
	  {
	    n=0;
	    if(c[i+1]>=97)
	    c[i+1]=c[i+1]-32;
      }
	    else if(n==0)
    	{
		n=1;
		    if(c[i]>='A'&&c[i]<='Z')
            word++;//为什么if改成(c[i]>'A')就不少算一个单词了？
	    }
    }
    printf("%d words. ",word);
    puts(c);
}
    return 0;
}//不同的输入顺序，结果不同？

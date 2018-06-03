#include <stdio.h>
#include <string.h>
int main()
{
	char c[80],ch;
	int n,i,j;
	i=0;
	while(!feof(stdin))//需要加一个ctrl+z模拟文件结束符
{//不支持循环多组数据输入。
	c[i]=getchar();
	i++;
}//叔叔的方法有误
    n=strlen(c);
    for(i=0;i<n;i++)
    {
    if(c[i]<97)
    c[i]=c[i]+32;//先把大写改成小写
    }
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
     if(c[i]>c[j])
     {
   	 ch=c[i];
   	 c[i]=c[j];
   	 c[j]=ch;
     }
    for(i=0;i<n-1;i++)
    {
   	  if(c[i]<c[i+1])
   	  {
         printf("%c",c[i]);
      }
    }
    printf("%c",c[n-1]);
    printf("\n");
//printf("%s",c);
}

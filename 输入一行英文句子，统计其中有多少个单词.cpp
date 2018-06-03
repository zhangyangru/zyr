#include<stdio.h>
#include<string.h>
int main()
{
  int i,n=0,word=0;
  char c[132]; //或者再定义一个char型的变量a 
  gets(c);
  while(strlen(c)>0)
  {
  	word=0;
  	n=0;
  for(i=0;c[i]!='\0';i++)//这里写成(a=c[i])!='\0' ,或直接写成a=c[i]为什么？ 
  {
      if(c[i]==' ')
     {
       n=0;
     }
       else
     {
  	   if(n==0)
  	  {
  	    n=1;
  	    word++;	
	  }
     }
   }
   printf("%d\n",word);
   gets(c);//从头开始存入单词进入数组吗？ 
 } 
}

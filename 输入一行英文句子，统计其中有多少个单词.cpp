#include<stdio.h>
#include<string.h>
int main()
{
  int i,n=0,word=0;
  char c[132]; //�����ٶ���һ��char�͵ı���a 
  gets(c);
  while(strlen(c)>0)
  {
  	word=0;
  	n=0;
  for(i=0;c[i]!='\0';i++)//����д��(a=c[i])!='\0' ,��ֱ��д��a=c[i]Ϊʲô�� 
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
   gets(c);//��ͷ��ʼ���뵥�ʽ��������� 
 } 
}

#include<stdio.h>
#include<string.h>
int main()
{
   char a[20];
   char b[20];
   int i,j=0,k=0,m=0,flag,n;
   gets(a);//����һ�����Ȳ�����20���ַ��� 
   gets(b);//������Ҫ����Ӵ� 
   while(a[j])
   {
   	n=0;
   for(i=0;b[i];i++)
   {
    	for(j=k;a[j];j++)
   	    {
           if(b[i]==a[j])
          {
            n++;
            flag=1;
            break;
          }
		   else
		   {
		   flag=0;
	       }
        }
        if(flag==1)
        {
         j++;
         k=j;
        }
        else
        {
        k=j++;
        break;
		}
   }
   if(strlen(b)==n)
   m++;
  }
  printf("%d",m);
} 
   
   

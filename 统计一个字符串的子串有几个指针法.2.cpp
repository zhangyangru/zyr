#include<stdio.h>
#include<string.h>
/*
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
  printf("%d",m);//����㷽�� 
} 
   */
int main()
{
   char a[20];
   char b[20];
   int i,j=0,k=0,m=0,flag,n;
   char *p2,*p1,*p;
   p=a;//��pָ��a���� 
   p1=a;
   p2=b;//p1ָ��a���飬p2ָ��b����
   gets(a);//����һ�����Ȳ�����20���ַ��� 
   gets(b);//������Ҫ����Ӵ�
   while(*p1)
   {
   	n=0;
    for(p2=b;*p2;p2++)
	{
	    for(p1=p;*p1;p1++)
		{
			if(*p2==*p1)
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
			  p1++;
			  p=p1;
		   }
		   else
		   {
		   	p=p1++;
		   	break;
		   }
	}
	if(strlen(b)==n)
	m++;
   }
  printf("%d",m);
  return 0;
}
  

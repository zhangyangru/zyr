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
   gets(a);//输入一个长度不超过20的字符串 
   gets(b);//输入想要求的子串 
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
  printf("%d",m);//看简便方法 
} 
   */
int main()
{
   char a[20];
   char b[20];
   int i,j=0,k=0,m=0,flag,n;
   char *p2,*p1,*p;
   p=a;//让p指向a数组 
   p1=a;
   p2=b;//p1指向a数组，p2指向b数组
   gets(a);//输入一个长度不超过20的字符串 
   gets(b);//输入想要求的子串
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
  

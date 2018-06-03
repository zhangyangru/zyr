#include<stdio.h>
int main()
{
	int common(int a,int b);
	int times(int a,int b,int c);
	int a,b,c,t;
	scanf("%d %d",&a,&b);
	c=common(a,b);
	printf("最大公约数=%d\n",c);
	t=times(a,b,c);
	printf("最小公倍数=%d",t);
	return 0;
}
    int common(int a,int b)
    {
      int i,min,max;
      if(a!=b)
      {
	    if(a>b)
	    {
	    min=b;
	    max=a;
        }
	      else
	      if(a<b)
	      {
	        min=a;
	        max=b;
          }
         for(i=min;i>=1;i--)
	     {
           if((min%i==0)&&(max%i==0))
           {
           	return i;
           	break;
		   }
         }
     }
	  else if(a=b)
	  return a;
	}
	int times(int a,int b,int c)
	{
		int t;
		t=a*b/c;
		return t;
	}
	  
	  
	  

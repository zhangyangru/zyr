#include<stdio.h>
int main()
{
	int f(int a);
	int m,n;
	float s1,s2;
	scanf("%d %d",&m,&n);
	s1=f(m);
	s2=f(n);
	printf("%f",s1/s2);
	return 0;
 } 
 
    int f(int a)
    {
     int p(int i);//对p函数的函数声明 
     int sum=0,w,j;
	 for(j=1;j<=a;j++)
	 {
	    w=p(j);
    	sum=sum+w;
     }
       return sum;
	}
	
	int p(int i)
	{
		int j,k=1;
		for(j=1;j<=i;j++)
		k=k*j;
	    return k;
	}
	
	
	
	

#include<stdio.h>//用递归调用的方法再试试 
int series(int a,int b,int n);
int main()
{
	int a=2,b=3;
	int n;
	scanf("%d",&n);//计算到数列的前n项 
	series(a,b,n);
	return 0;
}
int series(int a,int b,int n)
{
	int i,m[20];//
	int p,t,q;
	m[0]=a;m[1]=b; 
	for(i=0;i<n;)
	{
   	  p=m[i]*m[i+1];
   	  q=p/10;
   	  t=p%10;
     	if(q<1)
    	{
	    m[i+2]=p;
	    i++;
        }
	 else if(q>=1)
	 {
    	m[i+2]=q;
    	m[i+3]=t;
    	i=i+2;
     }
    }
    for(i=0;i<n;i++)
    printf("%d ",m[i]);
}

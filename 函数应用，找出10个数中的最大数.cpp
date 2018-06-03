#include<stdio.h>
int main()
{
	int max(int a,int b);//º¯ÊıÉùÃ÷ 
	int a[10]={12,32,41,34,89,78,41,89,67,90},i,m,n;
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
	for(i=1,m=a[0],n=0;i<10;i++)
	{
	if(max(m,a[i])>m)
	    {
	       m=max(m,a[i]);
	       n=i;
	    }
	}
	printf("max=%d %d",m,n+1);
	return 0;
}
    int max(int x,int y)
    {
    	return(x>y?x:y);
	} 

#define N 10
#include<stdio.h>
int main()
{
	int a[N],i,j,t,ex=1;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	while(ex) 
	{
		ex=0;
		for(i=0;i<N-1;i++)
		if(a[i]>a[i+1])
		{
			t=a[i];a[i]=a[i+1];a[i+1]=t;ex=1;
		}
	}
		for(i=0;i<N;i++)
		printf("%d ",a[i]);
	
}

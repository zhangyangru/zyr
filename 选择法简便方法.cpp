#include<stdio.h>
int main()
{
   int a[10]={10,9,8,7,6,5,4,3,2,1},k,t,i,j;
   for(i=0;i<10;i++)	
	{
		k=i;
		for(j=i+1;j<10;j++)
		if(a[k]>a[j])
		k=j;
		if(k!=i)
		{
		t=a[k];a[k]=a[i];a[i]=t;
	    }
    }
    for(i=0;i<10;i++)
    printf("%d",a[i]);
    return 0;
}

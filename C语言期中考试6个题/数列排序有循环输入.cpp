#include <stdio.h>
#include <string.h>
int main()
{
	int a[20];
	char b[10];
	int n,i,j,t;
	while(!feof(stdin))
{
	scanf("n=%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
//	getchar();//为什么要在这里加个getchar
	gets(b);
	for(i=0;i<n-1;i++)
	{
	 for(j=i+1;j<n;j++)
         if(a[i]<a[j])
       {
        t=a[i];a[i]=a[j];a[j]=t;
       }
    }
   for(i=0;i<n-1;i++)
    {
     if(a[i]>a[i+1])
      printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);
    printf("\n");
}
return 0;
}


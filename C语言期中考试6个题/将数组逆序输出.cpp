#include<stdio.h>
int main()
{
	int n;
	int i,k;
	int a[10];
	int b[10];
	scanf("%d",&n);
	k=n-1;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	b[k--]=a[i];
    }
    for(i=0;i<n;i++)
    printf("%d  ",b[i]);
    return 0;
}

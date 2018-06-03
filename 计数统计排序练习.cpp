#define N 20
#include<stdio.h>
int main()
{
	int a[N]={12,13,14,17,12,78,56,78,90,34,11,12,12,34,54,98,76,90,13,14};
	int b[101]={0};/*注意要初始化*/ 
	int c[N],i,j;
	int k=0;
	for(i=0;i<N;i++)
	{
	b[a[i]]++; 
	}
	for(i=0;i<101;i++) 
	for(j=1;j<=b[i];j++)
    c[k++]=i;
    for(i=0;i<N;i++)
    printf("%d  ",c[i]);
    return 0;
 }
 
  

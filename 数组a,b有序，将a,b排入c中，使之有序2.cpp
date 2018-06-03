#include<stdio.h>
int main()
{
	int a[3]={1,3,5},b[4]={2,6,7,8},i,j,c[7],t,k;
	for(i=0;i<3;i++)
	c[i]=a[i];
	for(i=0,k=3;i<4,k<7;k++,i++)
	c[k]=b[i];
	for(i=0;i<6;i++)
	{
	   for(j=i+1;j<7;j++)
	   if(c[i]>c[j])
	   {
	   t=c[i];c[i]=c[j];c[j]=t;
       }
    }
    for(i=0;i<7;i++)
    printf("%d  ",c[i]);//该方法是先把ab数组复制在c数组中然后用选择法统一排序 
 } 


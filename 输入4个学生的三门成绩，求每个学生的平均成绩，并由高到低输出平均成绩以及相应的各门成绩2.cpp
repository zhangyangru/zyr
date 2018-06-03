#define N 4
#include<stdio.h>
int main()
{
	int s[N][3],i,p,j,t,k;
	float a[N];
	for(i=0;i<N;i++)
	scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);//列数给定，可以连续存入三个数 
	for(i=0;i<N;i++)
	a[i]=(s[i][0]+s[i][1]+s[i][2])/3.0;//求平均成绩 
	for(i=0;i<N-1;i++)
	{
	for(j=i+1;j<N;j++)
     if(a[i]<a[j])
     {
       t=a[i];a[i]=a[j];a[j]=t;	
	   for(k=0;k<3;k++) 
	   {
	     p=s[i][k];s[i][k]=s[j][k];s[j][k]=p;
	   }
     }
    }
    for(i=0;i<N;i++)
    printf("%d %d %d    %.0f\n",s[i][0],s[i][1],s[i][2],a[i]);
    
return 0;
}

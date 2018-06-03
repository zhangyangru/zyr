#include<stdio.h>
int main()
{
  int a[4][3],i,j,b[4],m=0,k,t,p;
  float v;	
  for(i=0;i<4;i++)
  {	
     m=0;
     for(j=0;j<3;j++)
	 {	
	 scanf("%d",&a[i][j]);
	 m=m+a[i][j];
     }
	 b[i]=m/3.0;
  }
    for(i=0;i<3;i++)	
	for(j=i+1;j<4;j++)
	if(b[i]<b[j])
	{
       t=b[i];b[i]=b[j];b[j]=t;
       for(k=0;k<3;k++)
       {
       p=a[i][k];a[i][k]=a[j][k];a[j][k]=p;
       }
	}
	for(i=0;i<4;i++)
	{
    for(j=0;j<3;j++)
    {
    printf("%d  ",a[i][j]);
	}
	printf("  %d",b[i]);
    printf("\n");
	}
    return 0;
}

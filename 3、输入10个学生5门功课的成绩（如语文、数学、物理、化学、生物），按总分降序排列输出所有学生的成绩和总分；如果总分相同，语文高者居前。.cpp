#include<stdio.h>
int main()
{
	int a[10][5];
	int j,k=0,t,p,m,i,s[10]={0};//注意需要初始化为0 
	for(i=0;i<10;i++)
	{
	    for(j=0;j<5;j++)
    	{
      	scanf("%d",&a[i][j]);
     	s[k]=s[k]+a[i][j];
        }
          k++;
    }
    for(i=0;i<9;i++)
    for(j=i+1;j<10;j++)
    {
      if(s[i]<s[j])
      {
         t=s[i];s[i]=s[j];s[j]=t;
         for(p=0;p<5;p++)
         {
          m=a[i][p];a[i][p]=a[j][p];a[j][p]=m;
         }
      }
      if(s[i]==s[j])
        {
          if(a[i][0]<a[j][0])
          {
            for(p=0;p<5;p++)
            {
            m=a[i][p];a[i][p]=a[j][p];a[j][p]=m;
            }
          }
        }
    }
	for(i=0;i<10;i++)
	{
    	for(j=0;j<5;j++)
    	{
	    printf("%d  ",a[i][j]);
	    }
     	printf("%d",s[i]);
     	printf("\n");
    }
    return 0;
}

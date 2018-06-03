#include<stdio.h>
int main()
{
int m,n,i,j,k,t;
int a[10][10];
int b[10][10];//注意必须指定数组的大小，不能写成a[m][n],b[n][m]
while(!feof(stdin))
{
scanf("%d*%d",&m,&n);
   for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
   scanf("%d",&a[i][j]);
   }
  }
  for(i=0,j=n-1;i<j;i++,j--)
      for(k=0;k<m;k++)
      {
       t=a[k][i];a[k][i]=a[k][j];a[k][j]=t;//列镜像的情况
      }
   for(i=0;i<m;i++)
   for(j=0;j<n;j++)
   b[j][i]=a[i][j];
   for(i=0;i<n;i++)
   {
   for(j=0;j<m;j++)
   printf("%d ",b[i][j]);
   printf("\n");
   }
}
   return 0;
}

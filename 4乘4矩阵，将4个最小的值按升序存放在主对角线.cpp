#include<stdio.h>
int main()
{
   int a[4][4];
   int b[16];//将二维数组转置为一维数组 
   int i,j,k=0,t;
   for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   scanf("%d",&a[i][j]);
   for(i=0;i<4;i++)
   {
    for(j=0;j<4;j++)
    b[k++]=a[i][j];
   } 
       for(i=0;i<15;i++)
       {
          for(j=i+1;j<16;j++)
            if(b[i]>b[j])
          {
           t=b[i];b[i]=b[j];b[j]=t;
          }
        }
         	for(i=0;i<4;i++)
	        a[i][i]=b[i];
         	k=4;
    	         for(i=0;i<4;i++)
	             {
	                 for(j=0;j<4;j++)
	                 {
	                  if(i!=j)
	                  a[i][j]=b[k++];
	                 }
                 }
        for(i=0;i<4;i++)
        { 
        for(j=0;j<4;j++)
        printf("%3d  ",a[i][j]);
        printf("\n");//思考直接将最小的数与对角线的数交换的方法 
        } //思考二维数组可以直接选择法排序吗？ 
}

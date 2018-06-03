#include<stdio.h>
int main()
{
	int a[3][4]={{24,44,9,56},{12,33,77,59},{34,45,55,13}};
	int i,j,m,n,t;
	for(i=0;i<3;i++)
	{
		for(m=1;m<=3;m++)
		{
		  	for(j=0;j<4-m;j++)
		    if(a[i][j]>a[i][j+1])
		    {
		     t=a[i][j];a[i][j]=a[i][j+1];a[i][j+1]=t;
	        }
	    }
	}
	for(i=0;i<4;i++)
	{
	    for(m=1;m<=2;m++)	
		{
		    for(j=0;j<3-m;j++)	
		    {
			    if(a[j][i]>a[j+1][i])
		    	{
		    	t=a[j][i];a[j][i]=a[j+1][i];a[j+1][i]=t;
		        }
            }
        }
    }//用两个冒泡循环实现行与列的交换 
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++)
    printf("%d  ",a[i][j]);
    printf("\n");
    }
 } 

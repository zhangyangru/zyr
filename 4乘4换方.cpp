#include<stdio.h>
int main()
{
  int a[4][4];
  int i,j,m=0,k=1,p,q,h;
  for(i=1;i<3;i++)
  {
  	m=m+i-1;//m=1,i=2
  	for(p=i-1;p<4-m;p++)//p=2,Ìø³öÑ­»·p=3 
  	{
    	a[m][p]=k++;
    }
  	     k=k-1;
  	     for(q=m;q<=4-i;q++)
  	    {
	         a[q][4-i]=k++; 
	    }    
         	k=k-1;
         	for(j=4-i;j>=m;j--) 
         	{
       	        a[4-i][j]=k++;
       	    }    
             	k=k-1;
            	for(h=4-i;h>=i;h--)
            	{
            	   a[h][m]=k++; 
                }	   
   }   
   for(i=0;i<4;i++) 
   {
   for(j=0;j<4;j++)
     printf("%d\t",a[i][j]);
     printf("\n");
   }
}

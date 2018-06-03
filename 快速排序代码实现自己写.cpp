#include <stdio.h>
int main()
{
	int quicksort(int*l,int*r,int a);
	int a[9]={3,7,8,5,2,1,9,5,4};
	int i,j,n;
	int *l,*r;
	scanf("%d",&n);
	*r=(a+8);
	for(l=a;l<(a+9);l++)
	{
	  if(l<r)
	  {
	  if(*l>n)
	  {
	      while(*r>=n)
	      { 
	      r--;
	      } 
        quicksort(l,r,a);
        r--;
      }
      }
    }
	return 0;
}
	  
	
	
	
 } 
 int quicksort(int*l,int*r,int a)
 {
 	 int t;
 	 t=*l;
 	 *l=*r;
 	 *r=t;
 }

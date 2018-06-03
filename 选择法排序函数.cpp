#include<stdio.h>
int main()
{
	void sort(int array[10]);
	int a[10]={23,45,32,4,77,56,98,78,34,88},i;
	sort(a); 
	for(i=0;i<10;i++)
	printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
void sort(int array[10])
{
     int i,k,j,t;//不用定义n,形参中已经定义过 
     for(i=0;i<9;i++)
     {
	  k=i;
	  for(j=i+1;j<10;j++) 
      if(array[j]<array[k])//不能写成a[j],应该与形参中的保持一致 
      k=j;
      t=array[k];array[k]=array[i];array[i]=t;
     }
}

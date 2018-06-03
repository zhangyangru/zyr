#include<stdio.h>
int main()
{
	int a[3]={5,23,56};
	int b[5]={5,21,66,86,88};
	int c[8];//可以不赋值 
	int i=0,j=0,k=0;
	while(i<3&&j<5)//考虑相等情况 
	{
    if(a[i]>b[j])	
	   {
	  	c[k++]=b[j++];
	   }
	else
	   {
	   c[k++]=a[i++]; 
	   }
    }
    //if(i==3)
   // {
    //  for(i=k;i<8&&j<5;i++,j++)	
     // c[i]=b[j];			
//	}
//	if(j==5)
	//{
	//  for(j=k;j<8&&i<3;i++,j++)	
	 //  c[j]=a[i];	
//	}//画斜杠部分的方法也可以但有点麻烦 
    while(j<5)
    c[k++]=b[j++];
    while(i<3)
    c[k++]=a[i++];
	for(i=0;i<8;i++)
	printf("%d  ",c[i]);
	return 0;
}

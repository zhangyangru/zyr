#include <stdio.h>
int hua(int i)//水仙花数 
{ 
 int p,q,w,r;
   p=i/100;
   q=(i%100)/10;
   w=(i%100)%10;
   r=p*p*p+q*q*q+w*w*w;
   if(r==i)
  // return i;
  // else
 //  return 0;//情况要写完整 ，注释掉的为方法2 
   printf("%d  ",i) ;
}

int main()
{
	int i;
	printf("1000以内的水仙花数：\n");
	for(i=100;i<1000;i++)
//	if((hua(i))!=0)
//	printf("%5d ",hua(i));//注释掉的为方法2 
	hua(i);
	return 0;
}

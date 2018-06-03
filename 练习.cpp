#include<stdio.h>
int main()
{
	char a[5];
	int j,q=0;
	for(j=0;j<5;j++)
   {
     scanf("%c",&a[j]);
     if(a[j]!='\n')
	 q++;
     else
     break;
   }
	for(j=0;j<=q-1;j++)
	printf("%c",a[j]);/*若用%d输出 ,输出的是这些字符的ascall码*/ 
   return 0;	
}



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
	printf("%c",a[j]);/*����%d��� ,���������Щ�ַ���ascall��*/ 
   return 0;	
}



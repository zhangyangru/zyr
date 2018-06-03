#include<stdio.h>
int main()
{
	int i,j=0,p,q;
	char a[]="China ";//数组长度为7 ，加上了'\0' 
	char b[]="is a big city";//数组长度为14,加上了最后的'\0' 
	char c[20];
	     for(i=0;a[i]!='\0';i++)
        	c[j++]=a[i];
            	for(p=0;b[p]!='\0';p++)
	c[j++]=b[p];//j自加完等于19
	c[j]='\0';
	for(q=0;q<20;q++)
	printf("%c",c[q]);
}

#include<stdio.h>
int main()
{
	int i,j=0,p,q;
	char a[]="China ";//���鳤��Ϊ7 ��������'\0' 
	char b[]="is a big city";//���鳤��Ϊ14,����������'\0' 
	char c[20];
	     for(i=0;a[i]!='\0';i++)
        	c[j++]=a[i];
            	for(p=0;b[p]!='\0';p++)
	c[j++]=b[p];//j�Լ������19
	c[j]='\0';
	for(q=0;q<20;q++)
	printf("%c",c[q]);
}

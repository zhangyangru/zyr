#include<stdio.h>
int main()
{
	int b[10]={100,200,300,400,500,600,700,800,900,1000};
	int *p=b;
	float s[8],*pf=s;
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(float)=%d\n",sizeof(float));
	printf("pf=%X  pf+1=%X  \n",pf,pf+1);
	printf("p=%X p+1=%X  \n",p,p+1);
	printf("*p+4=%d *(p+4)=%d\n",*p+4,*(p+4));
 } 

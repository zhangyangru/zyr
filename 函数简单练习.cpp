#include<stdio.h>
int main()
{
	int max(float x,float y);//形参换为浮点型 
	float a,b;//变量a b也变成浮点型 
	int c;//只有c还是整型 
	scanf("%f,%f",&a,&b);
	c=max(a,b);//浮点型最大的数赋给整型c 
	printf("max is %d\n",c);
	return 0;
 } 
 int max(float x,float y)
 {
    float z;
    z=x>y?x:y;
 	return(z);
 }
 

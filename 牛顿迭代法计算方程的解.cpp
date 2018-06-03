#include<stdio.h>
#include<math.h>
int main()
{
    float f1(float a,float b,float c,float d);//对f1的函数声明 
    float a,b,c,d;
    float x;//解出的x的值 
    scanf("%f %f %f %f",&a,&b,&c,&d);
    x=f1(a,b,c,d);
    printf("方程的根为:%.4f",x);
    return 0;
}

	float f1(float a,float b,float c,float d)
	{
		float f2(float a,float b,float c,float d,float x);//对f2函数声明
		float f3(float a,float b,float c,float x);//对f3的函数声明 
		float x0,x1=1.5;//自己设定近似根的值
		do
	    {
		x0=x1;
		x1=x0-f2(a,b,c,d,x0)/f3(a,b,c,x0);
	    }while(fabs(x1-x0)>=1e-6);
	    return x1;
	}
	
	float f2(float a,float b,float c,float d,float x)
	{
		float m;
		m=(((a*x*x+b*x+c)*x)+d);
		return m;
	}
	
    float f3(float a,float b,float c,float x)
	{
	  float p;
	  p=((3*a*x)+2*b)*x+c;//方程求导 
	  return p;
	}	

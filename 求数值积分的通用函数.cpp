#include <stdio.h>
#include <math.h>//���ȵĴ��룬�Լ���д 

float fsin(float x);
float fcos(float x);
float fex(float x);
float fun (float a,float b,int n, float (*p)(float x));

int main()
{
	float a1,b1,a2,b2,a3,b3;
	
	printf("�����������Һ��������ֵ�����a1������b1��");
	scanf("%f%f",&a1,&b1);
	printf("%f\n",fun(a1,b1,50,fsin));

	printf("�����������Һ��������ֵ�����a1������b1��");
	scanf("%f%f",&a2,&b2);
	printf("%f\n",fun(a2,b2,50,fcos));
	
	printf("��������e�׵�ָ�����������ֵ�����a������b��");
	scanf("%f%f",&a3,&b3);
	printf("%f\n",fun(a3,b3,50,fex));

	return 0;
}

float fsin(float x)
{
    return sin(x);
}

float fcos(float x)
{
    return cos(x);
}

float fex(float x)
{
    return exp(x);
}

float fun(float a,float b,int n,float(*p)(float x))
{
	float h = (b-a) / n ;
	float s = 0;
	
	for(float i = a; i < b;i += h)
		s += p(i)*h;
		
	return s;
}

#include<stdio.h>
#include<math.h>
int main()
{
    float f1(float a,float b,float c,float d);//��f1�ĺ������� 
    float a,b,c,d;
    float x;//�����x��ֵ 
    scanf("%f %f %f %f",&a,&b,&c,&d);
    x=f1(a,b,c,d);
    printf("���̵ĸ�Ϊ:%.4f",x);
    return 0;
}

	float f1(float a,float b,float c,float d)
	{
		float f2(float a,float b,float c,float d,float x);//��f2��������
		float f3(float a,float b,float c,float x);//��f3�ĺ������� 
		float x0,x1=1.5;//�Լ��趨���Ƹ���ֵ
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
	  p=((3*a*x)+2*b)*x+c;//������ 
	  return p;
	}	

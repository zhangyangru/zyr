
#define PI 3.14
#include<stdio.h>
#include<math.h> 
int main()
{
	float V1(float *p1,float *p2,float *p3,float *q1);//��������ԲͲ����ĺ��� 
	float V2(float *p4,float *p5,float *q2); //��������Բ׶����ĺ��� 
	float S(float *p4,float*p5,float *q3);//������	��Բ׶������ĺ��� 
	float r1,R1,h1,R2,h2,a=3,b=2,c=1;
	float *p1,*p2,*p3,*p4,*p5;
	float *q1,*q2,*q3;
	float v1,v2,s;
	scanf("%f %f %f",&r1,&R1,&h1);//ԲͲ���ھ��⾶�͸� 
	scanf("%f %f %f",&R2,&h2);//Բ׶�ĵ���뾶�͸� 
	p1=&r1;
	p2=&R1;
	p3=&h1;
	p4=&R2;
	p5=&h2;
	q1=&a;
	q2=&b;
	q3=&c;
    v1=V1(p1,p2,p3,q1);
    v2=V2(p4,p5,q2);
    s=S(p4,p5,q3);
    printf("Բ�������Ϊ��%f\n Բ׶�����Ϊ%f\n Բ׶�ı����Ϊ��%f\n",v1,v2,s);
//	return 0;
}
�� float V1(float *p1,float  *p2,float *p3,float *q1)
   {
    	*q1=PI*(*p3)*((*p2)*(*p2)-(*p1)*(*p1));
   }
   
    float V2(float *p4,float *p5,float *q2)
    {
	  *q2=PI*(*p5)*((*p4)*(*p4));
    }
    
   	float S( float *p4,float *p5,float *q3)
   	{
   		*q3=PI*(*p4)*(*p4+sqrt((*p5)*(*p5)+(*p4)*(*p4)));
   }

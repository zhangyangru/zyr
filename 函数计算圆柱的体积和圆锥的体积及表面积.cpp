#define PI 3.14
#include<stdio.h>
#include<math.h> 
int main()
{
	float V(int r,int R,int h);
	float S(int r,int R,int h);//˵�����������ڿ����������������� 
	int r1,R1,h1,r2,h2,R;
	float w,v,s; 
	scanf("%d %d %d",&r1,&R,&h1);
	scanf("%d %d %d",&R1,&h2,&r2);
	w=V(r1,R,h1);//ԲͲ����� 
	v=V(r2,R1,h2)/3;//Բ׶����� 
    s=S(r2,R1,h2);//Բ׶�ı���� 
	printf("ԲͲ�����Ϊ:%f\n Բ׶�����Ϊ%f\n Բ׶�ı����Ϊ%f\n",w,v,s);
    return 0;
}
    float V(int r,int R,int h)
    {
    	float v;
    	v=PI*h*(R*R-r*r);
    	return v;
	}
	
    float S(int r,int R,int h)
    {
    	float s;
    	s=PI*R*(R+sqrt(h*h+R*R));
    	return s;
	}

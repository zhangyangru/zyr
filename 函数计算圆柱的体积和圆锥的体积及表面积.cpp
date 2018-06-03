#define PI 3.14
#include<stdio.h>
#include<math.h> 
int main()
{
	float V(int r,int R,int h);
	float S(int r,int R,int h);//说明在主函数内可以声明两个函数。 
	int r1,R1,h1,r2,h2,R;
	float w,v,s; 
	scanf("%d %d %d",&r1,&R,&h1);
	scanf("%d %d %d",&R1,&h2,&r2);
	w=V(r1,R,h1);//圆筒的体积 
	v=V(r2,R1,h2)/3;//圆锥的体积 
    s=S(r2,R1,h2);//圆锥的表面积 
	printf("圆筒的体积为:%f\n 圆锥的体积为%f\n 圆锥的表面积为%f\n",w,v,s);
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

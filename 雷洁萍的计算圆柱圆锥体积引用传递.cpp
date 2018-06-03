#include<stdio.h>
#include<math.h>
#define pi 3.1415
float tong(float *r,float *R,float *h,float *v)
{
	*v=pi*(*R)*(*R)*(*h)-pi*(*r)*(*r)*(*h);
}
float zhui(float *r,float *h,float *v,float *s)
{
    *v=(pi*(*r)*(*r)*(*h))/3;
	*s=pi*(*r)*(*r)+pi*(*r)*(sqrt((*h)*(*h)+(*r)*(*r)));
}
int main()
{
  float r1,r2,R,h1,h2,v1,v2,s;
  scanf("%f %f %f",&r1,&R,&h1);
  scanf("%f %f",&r2,&h2);
  tong(&r1,&R,&h1,&v1);
  printf("圆筒体积为：%f\n",v1);
  zhui(&r2,&h2,&v2,&s);
  printf("圆锥的体积：%f\n圆锥的表面积：%f\n",v2,s);
}

#include<stdio.h>
int main()
{
	int max(float x,float y);//�βλ�Ϊ������ 
	float a,b;//����a bҲ��ɸ����� 
	int c;//ֻ��c�������� 
	scanf("%f,%f",&a,&b);
	c=max(a,b);//��������������������c 
	printf("max is %d\n",c);
	return 0;
 } 
 int max(float x,float y)
 {
    float z;
    z=x>y?x:y;
 	return(z);
 }
 

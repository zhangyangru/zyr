#include <stdio.h>
int hua(int i)//ˮ�ɻ��� 
{ 
 int p,q,w,r;
   p=i/100;
   q=(i%100)/10;
   w=(i%100)%10;
   r=p*p*p+q*q*q+w*w*w;
   if(r==i)
  // return i;
  // else
 //  return 0;//���Ҫд���� ��ע�͵���Ϊ����2 
   printf("%d  ",i) ;
}

int main()
{
	int i;
	printf("1000���ڵ�ˮ�ɻ�����\n");
	for(i=100;i<1000;i++)
//	if((hua(i))!=0)
//	printf("%5d ",hua(i));//ע�͵���Ϊ����2 
	hua(i);
	return 0;
}

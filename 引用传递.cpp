#include<stdio.h>
int main()
{
    void swap(int *p1,int *p2);//������
	int x,y;
	int *p1,*p2;//��Ҫ���¶���ָ�����*p1,*p2 
	scanf("%d %d",&x,&y);
	p1=&x;
	p2=&y;
	if(x>y)
	swap(p1,p2);
	printf("%d %d",x,y);
//	printf("%d %d",*p1,*p2);//Ҳ��������д 
}
    void swap(int *p1,int *p2)//�������ý������β�p1��p2�ͷ� 
	{
		int t;
		t=*p1;*p1=*p2;*p2=t;
	}	

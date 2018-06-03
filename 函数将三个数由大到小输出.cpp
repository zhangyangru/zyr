#include<stdio.h>
int main()
{
	int exchange(int *p1,int *p2,int *p3);
	int x,y,z,*p1,*p2,*p3;
	scanf("%d %d %d",&x,&y,&z);
	p1=&x;
	p2=&y;
	p3=&z;
    exchange(p1,p2,p3);
    printf("%d %d %d",x,y,z);
    return 0;
}
    void exchange(int *p1,int *p2,int *p3)
	{
		void swap(int *pt1,int *pt2);
		if(*p1<*p2)
		swap(p1,p2);
		if(*p1<*p3)
		swap(p1,p3);
		if(*p2<*p3)
		swap(p2,p3);
	}
	void swap(int *pt1,int *pt2)
	{
		int t;
		t=*pt1;
		*pt1=*pt2;
		*pt2=t;
	}

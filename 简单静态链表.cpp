#include<stdio.h>
struct Student
{
	int num;
	float score;
	struct Student *next;
};
struct Student a,b,c;//既可以直接在struct Student结构体后面中定义,又可以写在main()函数中
int main()
{
	struct Student *p;
	struct Student *head;//head指向的是一个结构体变量a,所以要定义成struct Student类型
//	scanf("%d %f",&a.num,&a.score);
//	scanf("%d %f",&b.num,&b.score);
//	scanf("%d %f",&c.num,&c.score);//可以直接对某一成员用赋值语句赋值,也可以scanf()语句来赋值
    head=&a;//为什么也可以放在a.num的前面?
	a.num=10101;
	a.score=89.5;
	b.num=10103;
	b.score=90;
	c.num=10107;
	c.score=85;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;
	do
	{
		printf("%d %.2f\n",p->num,p->score);//p->num相当于a.num,以此类推
	    p=p->next;
    }while(p!=NULL);
    return 0;
}


#include<stdio.h>
struct Student
{
	int num;
	float score;
	struct Student *next;
};
struct Student a,b,c;//�ȿ���ֱ����struct Student�ṹ������ж���,�ֿ���д��main()������
int main()
{
	struct Student *p;
	struct Student *head;//headָ�����һ���ṹ�����a,����Ҫ�����struct Student����
//	scanf("%d %f",&a.num,&a.score);
//	scanf("%d %f",&b.num,&b.score);
//	scanf("%d %f",&c.num,&c.score);//����ֱ�Ӷ�ĳһ��Ա�ø�ֵ��丳ֵ,Ҳ����scanf()�������ֵ
    head=&a;//ΪʲôҲ���Է���a.num��ǰ��?
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
		printf("%d %.2f\n",p->num,p->score);//p->num�൱��a.num,�Դ�����
	    p=p->next;
    }while(p!=NULL);
    return 0;
}


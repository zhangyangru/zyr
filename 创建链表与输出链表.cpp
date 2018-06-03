#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#define LEN sizeof(struct Student) //在以后出现LEN的地方，用student这个结构体所占的字节数代替，这个字节数是一个整数.
struct Student
{
	int num;
	float score;
	struct Student *next;//定义指针变量，指向struct Sudent 结构体类型
};
struct Student *creat()// 用于创建链表的返回指针值的函数，返回的指针指向struct Student 结构体类型，得到结构体类型的起始地址
{
	int n=0;//记录节点的个数
	struct Student *head,*p1,*p2;//指针变量指向结构体类型
	p1=p2=(struct Student*)malloc(LEN);//开辟动态存储区函数，强制类型转换为返回的指针指向struct Student 结构体类型,得到结构体类型的首地址,让p1 p2指向该结构体的首地址
	scanf("%d,%f",&p1->num,&p1->score);
	head=NULL;//先使head不指向任何节点，此时链表中无节点
    while(p1->num!=0)
    {
   	n=n+1;
   	if(n==1)
	head=p1;//让head指向该首节点
	else
	p2->next=p1;//让p2的next存放新节点的地址
	p2=p1;//让p2每次指向新的节点
	p1=(struct Student*)malloc(LEN);//让p1指向新的节点
	scanf("%d,%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return(head);
}
    
	void print(struct Student *head)//指向结构体的指针变量作为函数参数,无返回值，所以为void类型
	{
	   struct Student *p;
	   p=head;//把head的地址值赋给p，，使p指向第一个节点
	   if(head!=NULL)
	   do
	   {
	   	printf("%d %.1f\n",p->num,p->score);
	   	p=p->next;//把下一个节点的地址赋给p
	   }while(p!=NULL);//不能写成(p->next)!=NULL,因为这样写会跳过一个。
	}
	
	int main()
	{
		struct Student *head;
		head=creat();//调用creat 函数，返回第一个节点的起始地址
		print(head);//调用print函数
	    return 0;
	}
	

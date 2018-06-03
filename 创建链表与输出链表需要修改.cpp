#include <stdio.h>
#include <stdlib.h>//需要修改
#define LEN sizeof(struct Student) //在以后出现LEN的地方，用student这个结构体所占的字节数代替，这个字节数是一个整数.
struct Student
{
	int num;
	float score;
	struct Student *next;//定义指针变量，指向struct Sudent 结构体类型
};
struct Student *creat()//创建链表函数，返回的指针指向struct Student 结构体类型，得到结构体类型的起始地址
{
	int n=0;//记录节点的个数
	struct Student *head,*p1,*p2;
	struct Student *malloc(LEN);//返回的指针指向struct Student 结构体类型,得到结构体类型的首地址
	p1=p2=struct Student *malloc(LEN);//让p1 p2指向该结构体的首节点
	head=p1;//把首节点的地址赋给head
	next=p1;//把首节点的地址赋给next
	while(head!=NULL)
	{
	   n=n+1;
	   if(n==1)//第一节点
       scanf("%d %f",&next->num,&next->score);
	   else//如果不是第一个节点
	   p2=p1;//让p2指向新建的节点
	   p1=struct Student *malloc(LEN);//开辟新的节点
    }
    return head;
}
    
	void *print(struct Student *head)//指向结构体的指针变量作为函数参数
	{
	   struct Student *p;
	   p=head;//把head的地址值赋给p，，使p指向第一个节点
	  // if(head!=NULL)
	   do
	   {
	   	printf("%d %f\n",p->num,p->score);
	   	p=p->next;//把下一个节点的地址赋给p
	   }while(p!=NULL)
	}
	int main()
	{
		struct Student *head;
		head=creat();//调用creat 函数，返回第一个节点的起始地址
		print(head);//调用print函数
	    return 0;
	}

	

#include <stdio.h>
#include <stdlib.h>//��Ҫ�޸�
#define LEN sizeof(struct Student) //���Ժ����LEN�ĵط�����student����ṹ����ռ���ֽ������棬����ֽ�����һ������.
struct Student
{
	int num;
	float score;
	struct Student *next;//����ָ�������ָ��struct Sudent �ṹ������
};
struct Student *creat()//���������������ص�ָ��ָ��struct Student �ṹ�����ͣ��õ��ṹ�����͵���ʼ��ַ
{
	int n=0;//��¼�ڵ�ĸ���
	struct Student *head,*p1,*p2;
	struct Student *malloc(LEN);//���ص�ָ��ָ��struct Student �ṹ������,�õ��ṹ�����͵��׵�ַ
	p1=p2=struct Student *malloc(LEN);//��p1 p2ָ��ýṹ����׽ڵ�
	head=p1;//���׽ڵ�ĵ�ַ����head
	next=p1;//���׽ڵ�ĵ�ַ����next
	while(head!=NULL)
	{
	   n=n+1;
	   if(n==1)//��һ�ڵ�
       scanf("%d %f",&next->num,&next->score);
	   else//������ǵ�һ���ڵ�
	   p2=p1;//��p2ָ���½��Ľڵ�
	   p1=struct Student *malloc(LEN);//�����µĽڵ�
    }
    return head;
}
    
	void *print(struct Student *head)//ָ��ṹ���ָ�������Ϊ��������
	{
	   struct Student *p;
	   p=head;//��head�ĵ�ֵַ����p����ʹpָ���һ���ڵ�
	  // if(head!=NULL)
	   do
	   {
	   	printf("%d %f\n",p->num,p->score);
	   	p=p->next;//����һ���ڵ�ĵ�ַ����p
	   }while(p!=NULL)
	}
	int main()
	{
		struct Student *head;
		head=creat();//����creat ���������ص�һ���ڵ����ʼ��ַ
		print(head);//����print����
	    return 0;
	}

	

#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#define LEN sizeof(struct Student) //���Ժ����LEN�ĵط�����student����ṹ����ռ���ֽ������棬����ֽ�����һ������.
struct Student
{
	int num;
	float score;
	struct Student *next;//����ָ�������ָ��struct Sudent �ṹ������
};
struct Student *creat()// ���ڴ�������ķ���ָ��ֵ�ĺ��������ص�ָ��ָ��struct Student �ṹ�����ͣ��õ��ṹ�����͵���ʼ��ַ
{
	int n=0;//��¼�ڵ�ĸ���
	struct Student *head,*p1,*p2;//ָ�����ָ��ṹ������
	p1=p2=(struct Student*)malloc(LEN);//���ٶ�̬�洢��������ǿ������ת��Ϊ���ص�ָ��ָ��struct Student �ṹ������,�õ��ṹ�����͵��׵�ַ,��p1 p2ָ��ýṹ����׵�ַ
	scanf("%d,%f",&p1->num,&p1->score);
	head=NULL;//��ʹhead��ָ���κνڵ㣬��ʱ�������޽ڵ�
    while(p1->num!=0)
    {
   	n=n+1;
   	if(n==1)
	head=p1;//��headָ����׽ڵ�
	else
	p2->next=p1;//��p2��next����½ڵ�ĵ�ַ
	p2=p1;//��p2ÿ��ָ���µĽڵ�
	p1=(struct Student*)malloc(LEN);//��p1ָ���µĽڵ�
	scanf("%d,%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return(head);
}
    
	void print(struct Student *head)//ָ��ṹ���ָ�������Ϊ��������,�޷���ֵ������Ϊvoid����
	{
	   struct Student *p;
	   p=head;//��head�ĵ�ֵַ����p����ʹpָ���һ���ڵ�
	   if(head!=NULL)
	   do
	   {
	   	printf("%d %.1f\n",p->num,p->score);
	   	p=p->next;//����һ���ڵ�ĵ�ַ����p
	   }while(p!=NULL);//����д��(p->next)!=NULL,��Ϊ����д������һ����
	}
	
	int main()
	{
		struct Student *head;
		head=creat();//����creat ���������ص�һ���ڵ����ʼ��ַ
		print(head);//����print����
	    return 0;
	}
	

#include <stdio.h>
#define N 4
struct date
{
	int year;
	int month;
	int day;
};
struct Student
{
	char num[20];
	char name[20];
	char sex;
	struct date birthday;
	int score[4];
	float aver;//ƽ���ɼ� 
};
int main()
{
	void input(struct Student stu[]);//��������,�ṹ���������������β� 
	void sort(struct Student stu[]);//��������,���������ǽṹ�����ͣ��ṹ���������������� 
	void print(struct Student stu[]);//��������,�β��ǽṹ����� 
	struct Student stu[N],*p=stu;//����ṹ������ͽṹ��ָ�룬pָ��stu������Ԫ��stu[0], 
    input(p);//����input����,���������е�stu�������Ԫ�ص���ʼ��ַ�����β�����stu��ʹ�β�����stu���������е�stu��������ͬ�ĵ�ַ 
    sort(p);
	print(p);//����print��������max�����ķ���ֵ��Ϊʵ�� 
    return 0;
}
void input(struct Student stu[])
{
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%s %s %c %d %d %d %d %d %d %d",stu[i].num,stu[i].name,&stu[i].sex;&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4.0;//ע��ĳ�4������ 
    } 
}
void sort(struct Student stu[])//ע�⺯�����ͺͷ���ֵ������ 
{//��max�����ж��β�����Ĳ������Ƕ��������е�stu����Ĳ�����Ϊʲô���� 
int i,j;//m��ųɼ���ߵ�ѧ���������е����
struct Student temp;
for(i=0;i<N-1;i++)
{
for(j=i;j<N;j++)
if(stu[i].aver<stu[m].aver)
{
temp=stu[i];stu[i]=stu[j];stu[j]=temp;
}
}
}

void print(struct Student stu[])//�����ǽṹ������е���Ϣ 
{
	printf("ѧ��   ����   �Ա�    ��������           �ɼ�               ƽ���ɼ�"); 
	printf("                      �� �� ��    ���� ��ѧ ���� ����");
	printf("\n");
	for(i=0;i<N;i++)
	printf("%s %s %c %d %d %d %d %d %d %f\n",students[i].num,students[i].name,students[i].sex,students[i].birthday.year,students[i].birthday.month,students[i].birthday.day,students[i].score[0],students[i].score[1],students[i].score[2],students[i].aver);
} 
 


#include <stdio.h>
#define N 4
struct Date
{
	int year;
	int month;
	int day;
};
struct Student
{
	char num[20];
	char name[20];
	char sex[2];//һ�����������ֽ� 
	struct Date birthday;
	int score[4];
	float aver;//ƽ���ɼ� 
};
int main()
{ 
	void input( Student stu[]);//����дstruct ���뺯������,�ṹ���������������β� 
	void sort( Student stu[]);//����������,�ṹ���������������� 
	void print( Student stu[]);//�����������,�β��ǽṹ������ 
    Student stu[N],*p=stu;//����ṹ������ͽṹ��ָ�룬pָ��stu������Ԫ��stu[0], 
    input(p);//����input����,���������е�stu�������Ԫ�ص���ʼ��ַ�����β�����stu��ʹ�β�����stu���������е�stu��������ͬ�ĵ�ַ 
    sort(p); 
	print(p);//����print���� 
    return 0;
}
void input(Student stu[])
{
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%s %s %s %d %d %d %d %d %d %d",stu[i].num,stu[i].name,stu[i].sex,&stu[i].birthday.year,&stu[i].birthday.month,&stu[i].birthday.day,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4.0;//ע��ĳ�4������ 
    } 
}

void sort( Student stu[])//ע�⺯�����ͺͷ���ֵ������ 
{//��sort�����ж��β�����Ĳ������Ƕ��������е�stu����Ĳ�����Ϊʲô���� 
int i,j;//m��ųɼ���ߵ�ѧ���������е����
 Student temp;
for(i=0;i<N-1;i++)
{
for(j=i;j<N;j++)
if(stu[i].aver<stu[j].aver)
{
temp=stu[i];stu[i]=stu[j];stu[j]=temp;
}
}
}

void print( Student stu[])
{
	int i;
	printf("ѧ��           ����     �Ա�      ��������               �ɼ�                 ƽ���ɼ�\n"); 
	printf("                                  �� �� ��         ���� ��ѧ ���� ����");
	printf("\n");
	for(i=0;i<N;i++)
	printf("%-13s %-9s %-8s %-2d %-2d %-9d %-3d %-4d %-4d %-15d %.2f\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].birthday.year,stu[i].birthday.month,stu[i].birthday.day,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].aver);
}
 


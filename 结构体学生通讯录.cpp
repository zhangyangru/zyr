#include<string.h> 
#include <stdio.h>
#define N 3//��3��ѧ��Ϊ�� 
struct Student
{
	char num[20];//ѧ�� 
	char name[20];//�������� 
    char English[20];//Ӣ������ 
	char sex;
};
int main()
{
	char d;
	int i;
	void sort_C(Student stu[]);//�������������� 
	void sort_E(Student stu[]);//��Ӣ����������
	void sort_S(Student stu[]);//����ѧ������ 
	Student stu[N];
	Student *p=stu;
	for(i=0;i<N;i++)
	scanf("%s %s %s %c",stu[i].num,stu[i].name,stu[i].English,&stu[i].sex);
	printf("������C��E��S��C����������������E����Ӣ����������,S������ѧ������\n");
	getchar(); 
	scanf("%c",&d);
	if(d=='C')
	sort_C(p); 
	else if(d=='E')
    sort_E(p);
    else if(d=='S') 
    sort_S(p); 
    for(i=0;i<N;i++)
    {
    printf("%s %s %s %c",stu[i].num,stu[i].name,stu[i].English,stu[i].sex);
    printf("\n");
    }
    return 0;
}
void sort_C(Student stu[])
{
	int i,j;
	Student temp;
    for(i=0;i<N-1;i++)
    {
    for(j=i;j<N;j++)
    if(strcmp(stu[i].name,stu[j].name)>0)
    {
    temp=stu[i];stu[i]=stu[j];stu[j]=temp;
    }
    }
}
void sort_E(Student stu[])
{
	int i,j;
	Student temp;
    for(i=0;i<N-1;i++)
    {
    for(j=i;j<N;j++)
    if(strcmp(stu[i].English,stu[j].English)>0)//�ַ���1�����ַ���2������һ�������� 
    {//��Ӣ���ֵ��У�λ���ں����Ϊ���󡱣�Сд��ĸ�ȴ�д��ĸ�� 
    temp=stu[i];stu[i]=stu[j];stu[j]=temp;
    }
    }
}
void sort_S(Student stu[])
{
	int i,j;
	Student temp;
    for(i=0;i<N-1;i++)
    {
    for(j=i;j<N;j++)
    if(strcmp(stu[i].num,stu[j].num)>0)
    {
    temp=stu[i];stu[i]=stu[j];stu[j]=temp;
    }
    }
}


#include <stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
struct Com
{
	char  num[10];//��Ʒ��
	char name[15];//��Ʒ��
	char add[20];//������λ
    //int zone[3];//�绰���ţ�������ѭ������ֵ�����ֱ����int�ͣ�û������Ļ���ǰ��0�޷���� 
	char zone[4];//�绰���ţ������С����д3��Ҫ����ı�ʵ���ַ����Ĵ�С��һ������ϵͳҪ������Զ����0 
	int phone;//�绰 
	struct Date cargo;//��������(������)..
	float stock_price;//�����۸�
	int count;//����
    float sale_price;//���۵���
};
int main()
{
	struct Com goods[3]={{"05A710","ϴ�·�","��������","029",84210010,2017,4,21,19.89,90,24.90},
{"05B277","����","��������","034",23757345,2018,1,18,15.45,80,17.30},
{"04C214","�ͽ�ֽ","���쿪��","058",34782278,2017,12,1,16.34,70,19.20}};//3����Ʒ
	int i;
	printf("��Ʒ��       ��Ʒ��     ������λ      �绰           ��������    �����۸�      ����        ���۵���\n");
	printf("                                   ���� ����        ��  ��  ��\n");
    for(i=0;i<3;i++)
	{
	  printf("%-12s %-10s %-10s %-5s %-10d %-4d %-2d %-5d %-13.2f %-13d %-8.2f",goods[i].num,goods[i].name,goods[i].add,goods[i].zone,goods[i].phone,goods[i].cargo.year,goods[i].cargo.month,goods[i].cargo.day,goods[i].stock_price,goods[i].count,goods[i].sale_price);
	  printf("\n");
    }
return 0;
}
//int zone[3]
//scanf("%d",&zone);//��д����������ʱ������������029
//Ҳ����ÿ����һ�����ְ�һ���ո�0 2 9
//ֻ����forѭ����ֵ
//�磺for(i=0;i<3;i++)
//     scanf("%d",&zone[i]);
//��Ҫע�⣬forѭ����������ʱӦ��ÿ����һ�����ְ�һ���ո�



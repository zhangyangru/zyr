#include <stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
struct  
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
}goods[3];//3����Ʒ
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%s %s %s %s %d %d %d %d %f %d %f",goods[i].num,goods[i].name,goods[i].add,goods[i].zone,&goods[i].phone,&goods[i].cargo.year,&goods[i].cargo.month,&goods[i].cargo.day,&goods[i].stock_price,&goods[i].count,&goods[i].sale_price);
	}
	getchar();
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




    

#include<stdio.h>
	struct Date//C��ҵδд���
	{
		int year;
		int month;
		int day;
	};
	struct goods
	{
		char num[10];//��Ʒ��
        char name[10];//��Ʒ����
		char cate[5];//��Ʒ��𣬼ҵ��ʳƷ
		char add[20];//������λ 
        char zone[10];//��������
		int phone;//���Һ���
		struct Date cargo;//��������
		float stock_price;//�����۸�
        int count;//��������
		float sale_price;//���۵���
		union   
		{
		    char ad[10];//�ҵ籣�޵�λ
            int n;//�ҵ籣�޵绰
			struct Date foods;//ʳƷ������
		}category;
	}goods[2];
 
   int main()
    {
      int i;
	  for(i=0;i<2;i++)
	  {
         scanf("%s,%s,%s,%s,%s,%d,%d,%d,%d,%f,%d,%f",goods[i].num,goods[i].name,goods[i].cate,goods[i].add,goods[i].zone,&goods[i].phone,&goods[i].cargo.year,&goods[i].cargo.month,&goods[i].cargo.day,&goods[i].stock_price,&goods[i].count,&goods[i].sale_price);
	  if(goods[i].cate=="�ҵ�")//ע���ַ���Ҫ��˫����
		  scanf("%s,%d",goods[i].category.ad,&goods[i].category.n);
	  else if(goods[i].cate=="ʳƷ")
		  scanf("%d,%d,%d",&goods[i].category.foods.year,&goods[i].category.foods.month,&goods[i].category.foods.day);
	  else 
		  printf("input error!");
	  }
	  printf("��Ʒ��    ��Ʒ��    ��Ʒ���     ������λ      ���ҵ绰     ��������         �����۸�       ����      ���۵���    �ҵ籣��     ʳƷ������      ");
	  printf("                                             ����    ����  ��   ��   ��                                         ��λ    �绰   ��   ��    ��   ");
	  for(i=0;i<2;i++)
	  {
		  if(goods[i].cate=="�ҵ�")
		  printf("%s,%s,%s,%s,%s,%d,%d,%d,%d,%f,%d,%f,%s,%d\n",goods[i].num,goods[i].name,goods[i].cate,goods[i].add,goods[i].zone,goods[i].phone,goods[i].cargo.year,goods[i].cargo.month,goods[i].cargo.day,goods[i].stock_price,goods[i].count,goods[i].sale_price,goods[i].category.ad,goods[i].category.n);
	      else if(goods[i].cate=="ʳƷ")
		  printf("%s,%s,%s,%s,%s,%d,%d,%d,%d,%f,%d,%f,%d,%d,%d\n",goods[i].num,goods[i].name,goods[i].cate,goods[i].add,goods[i].zone,goods[i].phone,goods[i].cargo.year,goods[i].cargo.month,goods[i].cargo.day,goods[i].stock_price,goods[i].count,goods[i].sale_price,goods[i].category.foods.year,goods[i].category.foods.month,goods[i].category.foods.day);
      }
    }


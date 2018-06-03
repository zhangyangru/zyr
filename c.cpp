#include<stdio.h>
	struct Date//C作业未写完的
	{
		int year;
		int month;
		int day;
	};
	struct goods
	{
		char num[10];//商品号
        char name[10];//商品名字
		char cate[5];//商品类别，家电和食品
		char add[20];//进货单位 
        char zone[10];//厂家区号
		int phone;//厂家号码
		struct Date cargo;//进货日期
		float stock_price;//进货价格
        int count;//进货数量
		float sale_price;//销售单价
		union   
		{
		    char ad[10];//家电保修单位
            int n;//家电保修电话
			struct Date foods;//食品保质期
		}category;
	}goods[2];
 
   int main()
    {
      int i;
	  for(i=0;i<2;i++)
	  {
         scanf("%s,%s,%s,%s,%s,%d,%d,%d,%d,%f,%d,%f",goods[i].num,goods[i].name,goods[i].cate,goods[i].add,goods[i].zone,&goods[i].phone,&goods[i].cargo.year,&goods[i].cargo.month,&goods[i].cargo.day,&goods[i].stock_price,&goods[i].count,&goods[i].sale_price);
	  if(goods[i].cate=="家电")//注意字符串要用双引号
		  scanf("%s,%d",goods[i].category.ad,&goods[i].category.n);
	  else if(goods[i].cate=="食品")
		  scanf("%d,%d,%d",&goods[i].category.foods.year,&goods[i].category.foods.month,&goods[i].category.foods.day);
	  else 
		  printf("input error!");
	  }
	  printf("商品号    商品名    商品类别     进货单位      厂家电话     进货日期         进货价格       数量      销售单价    家电保修     食品保质期      ");
	  printf("                                             区号    号码  年   月   日                                         单位    电话   年   月    日   ");
	  for(i=0;i<2;i++)
	  {
		  if(goods[i].cate=="家电")
		  printf("%s,%s,%s,%s,%s,%d,%d,%d,%d,%f,%d,%f,%s,%d\n",goods[i].num,goods[i].name,goods[i].cate,goods[i].add,goods[i].zone,goods[i].phone,goods[i].cargo.year,goods[i].cargo.month,goods[i].cargo.day,goods[i].stock_price,goods[i].count,goods[i].sale_price,goods[i].category.ad,goods[i].category.n);
	      else if(goods[i].cate=="食品")
		  printf("%s,%s,%s,%s,%s,%d,%d,%d,%d,%f,%d,%f,%d,%d,%d\n",goods[i].num,goods[i].name,goods[i].cate,goods[i].add,goods[i].zone,goods[i].phone,goods[i].cargo.year,goods[i].cargo.month,goods[i].cargo.day,goods[i].stock_price,goods[i].count,goods[i].sale_price,goods[i].category.foods.year,goods[i].category.foods.month,goods[i].category.foods.day);
      }
    }


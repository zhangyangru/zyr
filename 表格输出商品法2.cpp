#include <stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
struct Com
{
	char  num[10];//商品号
	char name[15];//商品名
	char add[20];//进货单位
    //int zone[3];//电话区号，可以用循环来赋值，如果直接是int型，没有数组的话，前导0无法输出 
	char zone[4];//电话区号，数组大小不能写3，要定义的比实际字符串的大小多一个，，系统要在最后自动添加0 
	int phone;//电话 
	struct Date cargo;//进货日期(年月日)..
	float stock_price;//进货价格
	int count;//数量
    float sale_price;//销售单价
};
int main()
{
	struct Com goods[3]={{"05A710","洗衣粉","西安开米","029",84210010,2017,4,21,19.89,90,24.90},
{"05B277","肥皂","北京开米","034",23757345,2018,1,18,15.45,80,17.30},
{"04C214","餐巾纸","重庆开米","058",34782278,2017,12,1,16.34,70,19.20}};//3种商品
	int i;
	printf("商品号       商品名     进货单位      电话           进货日期    进货价格      数量        销售单价\n");
	printf("                                   区号 号码        年  月  日\n");
    for(i=0;i<3;i++)
	{
	  printf("%-12s %-10s %-10s %-5s %-10d %-4d %-2d %-5d %-13.2f %-13d %-8.2f",goods[i].num,goods[i].name,goods[i].add,goods[i].zone,goods[i].phone,goods[i].cargo.year,goods[i].cargo.month,goods[i].cargo.day,goods[i].stock_price,goods[i].count,goods[i].sale_price);
	  printf("\n");
    }
return 0;
}
//int zone[3]
//scanf("%d",&zone);//该写发错误，输入时不能连着输入029
//也不能每输入一个数字按一个空格0 2 9
//只能用for循环赋值
//如：for(i=0;i<3;i++)
//     scanf("%d",&zone[i]);
//但要注意，for循环输入数字时应该每输入一个数字按一个空格



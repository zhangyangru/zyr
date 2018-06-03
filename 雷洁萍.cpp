#include <stdio.h>
struct telphone
{
	int qu[3];
	int num[8];
};
struct date
{
	int year[4];
	int month[2];
	int day[2];
};
struct informatin
{
	char number[7];		//商品号；
	char name[10];		//商品名;
	char address[16];	//进货单位；
	struct telphone num;	//电话号码（区号、号码）；
	struct date x;		//进货日期（年、月、日）；
	float price;			//进货价格；
	int count;			//数量；
	float sale;			//销售单价；
}message[2];
void main()
{
	int i,j;
	for(i=0;i<1;i++)
	{
		gets(message[i].number);
		gets(message[i].name);
		gets(message[i].address);
		scanf("%d%d%d",&message[i].num.qu[0],&message[i].num.qu[1],&message[i].num.qu[2]);
		for(j=0;j<8;j++)	scanf("%d",&message[i].num.num[j]); 
		for(j=0;j<4;j++)	scanf("%d",&message[i].x.year[j]);
		scanf("%d%d",&message[i].x.month[0],&message[i].x.month[1]);
		scanf("%d%d",&message[i].x.day[0],&message[i].x.day[1]);
		scanf("%f",&message[i].price);
		scanf("%d",&message[i].count);
		scanf("%f",&message[i].sale);
	}
	printf("商品号   商品名   进货单位   电话        进货日期      进货价格   数量   销售单价\n");
	printf("                             区号 号码   年   月  日   \n");
	for(i=0;i<1;i++)
	{
		printf("%s   ",message[i].number);
	  	printf("%s   ",message[i].name);
		printf("%s    ",message[i].address);
		printf("%d%d%d ",message[i].num.qu[0],message[i].num.qu[1],message[i].num.qu[2]);
		for(j=0;j<8;j++)	printf("%d",message[i].num.num[j]);printf(" ");
		for(j=0;j<4;j++)	printf("%d",message[i].x.year[j]);
		printf(" %d%d ",message[i].x.month[0],message[i].x.month[1]);
		printf("%d%d ",message[i].x.day[0],message[i].x.day[1]);
		printf("%.2f ",message[i].price);
		printf("%d ",message[i].count);
		printf("%.2f ",message[i].sale);
		printf("\n");
	}
}
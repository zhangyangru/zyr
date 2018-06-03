#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
struct Student
{
	char num[20];//学号 
	char name[10];
	char sex;
	struct date birthday;
	int score[4];
	float aver;
}students[3];
int main()
{
	int i;
	int j;
	int sum=0;
	struct Student temp;
	for(i=0;i<3;i++)
	{
		scanf("%s %s %c %d %d %d %d",students[i].num,students[i].name,&students[i].sex,&students[i].birthday.year,&students[i].birthday.month,&students[i].birthday.day);
		for(j=0;j<4;j++)
		{ 
		scanf("%d",&students[i].score[j]); 
		sum=sum+students[i].score[j]; 
		}
		students[i].aver=sum/4.0;
	}
	for(i=0;i<2;i++)
	{
		for(j=i;j<3;j++)
		if(students[i].aver<students[j].aver)
		{
		temp=students[i];
		students[i]=students[j];
		students[j]=temp;//将结构体数组整体交换 
        }
	}
	printf("学号   姓名   性别    出生日期           成绩               平均成绩"); 
	printf("                      年 月 日    语文 数学 物理 生物");
	printf("\n");
	for(i=0;i<3;i++)
	printf("%s %s %c %d %d %d %d %d %d %f\n",students[i].num,students[i].name,students[i].sex,students[i].birthday.year,students[i].birthday.month,students[i].birthday.day,students[i].score[0],students[i].score[1],students[i].score[2],students[i].aver);
	return 0;
}

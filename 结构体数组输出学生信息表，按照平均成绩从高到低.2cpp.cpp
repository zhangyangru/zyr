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
	char sex[2];//一个汉字两个字节 
	struct Date birthday;
	int score[4];
	float aver;//平均成绩 
};
int main()
{ 
	void input( Student stu[]);//不用写struct 输入函数声明,结构体数组做函数的形参 
	void sort( Student stu[]);//排序函数声明,结构体数组作函数参数 
	void print( Student stu[]);//输出函数声明,形参是结构体数组 
    Student stu[N],*p=stu;//定义结构体数组和结构体指针，p指向stu数组首元素stu[0], 
    input(p);//调用input函数,将主函数中的stu数组的首元素的起始地址传给形参数组stu，使形参数组stu与主函数中的stu数组有相同的地址 
    sort(p); 
	print(p);//调用print函数 
    return 0;
}
void input(Student stu[])
{
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%s %s %s %d %d %d %d %d %d %d",stu[i].num,stu[i].name,stu[i].sex,&stu[i].birthday.year,&stu[i].birthday.month,&stu[i].birthday.day,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4.0;//注意改成4可以吗？ 
    } 
}

void sort( Student stu[])//注意函数类型和返回值的类型 
{//在sort函数中对形参数组的操作就是对主函数中的stu数组的操作，为什么？？ 
int i,j;//m存放成绩最高的学生在数组中的序号
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
	printf("学号           姓名     性别      出生日期               成绩                 平均成绩\n"); 
	printf("                                  年 月 日         语文 数学 物理 生物");
	printf("\n");
	for(i=0;i<N;i++)
	printf("%-13s %-9s %-8s %-2d %-2d %-9d %-3d %-4d %-4d %-15d %.2f\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].birthday.year,stu[i].birthday.month,stu[i].birthday.day,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].score[3],stu[i].aver);
}
 


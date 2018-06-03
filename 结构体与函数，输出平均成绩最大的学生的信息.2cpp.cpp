#include <stdio.h>
#define N 4
struct date
{
	int year;
	int month;
	int day;
};
struct Student
{
	char num[20];
	char name[20];
	char sex;
	struct date birthday;
	int score[4];
	float aver;//平均成绩 
};
int main()
{
	void input(struct Student stu[]);//函数声明,结构体数组做函数的形参 
	void sort(struct Student stu[]);//函数声明,函数类型是结构体类型，结构体数组作函数参数 
	void print(struct Student stu[]);//函数声明,形参是结构体变量 
	struct Student stu[N],*p=stu;//定义结构体数组和结构体指针，p指向stu数组首元素stu[0], 
    input(p);//调用input函数,将主函数中的stu数组的首元素的起始地址传给形参数组stu，使形参数组stu与主函数中的stu数组有相同的地址 
    sort(p);
	print(p);//调用print函数，以max函数的返回值作为实参 
    return 0;
}
void input(struct Student stu[])
{
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%s %s %c %d %d %d %d %d %d %d",stu[i].num,stu[i].name,&stu[i].sex;&stu[i].score[0],&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/4.0;//注意改成4可以吗？ 
    } 
}
void sort(struct Student stu[])//注意函数类型和返回值的类型 
{//在max函数中对形参数组的操作就是对主函数中的stu数组的操作，为什么？？ 
int i,j;//m存放成绩最高的学生在数组中的序号
struct Student temp;
for(i=0;i<N-1;i++)
{
for(j=i;j<N;j++)
if(stu[i].aver<stu[m].aver)
{
temp=stu[i];stu[i]=stu[j];stu[j]=temp;
}
}
}

void print(struct Student stu[])//传的是结构体变量中的信息 
{
	printf("学号   姓名   性别    出生日期           成绩               平均成绩"); 
	printf("                      年 月 日    语文 数学 物理 生物");
	printf("\n");
	for(i=0;i<N;i++)
	printf("%s %s %c %d %d %d %d %d %d %f\n",students[i].num,students[i].name,students[i].sex,students[i].birthday.year,students[i].birthday.month,students[i].birthday.day,students[i].score[0],students[i].score[1],students[i].score[2],students[i].aver);
} 
 


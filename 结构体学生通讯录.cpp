#include<string.h> 
#include <stdio.h>
#define N 3//以3个学生为例 
struct Student
{
	char num[20];//学号 
	char name[20];//中文名字 
    char English[20];//英文名字 
	char sex;
};
int main()
{
	char d;
	int i;
	void sort_C(Student stu[]);//按中文名字排序 
	void sort_E(Student stu[]);//按英文名字排序
	void sort_S(Student stu[]);//按照学号排序 
	Student stu[N];
	Student *p=stu;
	for(i=0;i<N;i++)
	scanf("%s %s %s %c",stu[i].num,stu[i].name,stu[i].English,&stu[i].sex);
	printf("请输入C或E或S（C代表按中文名字排序，E代表按英文名字排序,S代表按照学号排序）\n");
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
    if(strcmp(stu[i].English,stu[j].English)>0)//字符串1大于字符串2，返回一个正整数 
    {//在英文字典中，位置在后面的为“大”，小写字母比大写字母大 
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


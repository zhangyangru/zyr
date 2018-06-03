#include <stdio.h>
struct
{
	int num;
	char name[5];
	char sex;
	char job;//只用写s或t 
	union
	{
		int clas; 
		char position[5];//职务 
	}category;//定义共用体变量 
 } person[2];//定义结构体数组，有两个元素
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%d %s %c %c ",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
		if(person[i].job=='s')
		scanf("%d",&person[i].category.clas);
		else if(person[i].job=='t')
		scanf("%s",person[i].category.position);
		else
		printf("出错"); 
	}
	printf("\n");
	printf("NO.   name     sex job class/position\n");
	for(i=0;i<2;i++)
	{
	if(person[i].job=='s')
	printf("%-6d %-10s %-4c %-4c %-10d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas);
	else
	printf("%-6d %-10s %-4c %-4c %-10s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
    }
    return 0;
 } 
 

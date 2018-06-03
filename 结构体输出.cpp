#include<stdio.h>
int main()
{
   struct Student
   {
     int num;
	 char name[20];
	 float score;	
   }
   student1,student2;
   scanf("%d%s%f",&student1.num,student1.name,&student1.score);//可以去掉中间那个&吗 
   scanf("%d%s%f",&student2.num,student2.name,&student2.score);	
   printf("The higher score is:\n"); 
   if(student1.score>student2.score)
   printf("%d %s %5.2f\n",student1.num,student1.name,student1.score);//为什么是%6.2，2个小数，加上小数点共6位 
   else if(student2.score>student1.score)
   printf("%d %s %4.2f\n",student2.num,student2.name,student2.score);
   return 0;//未考虑两学生成绩相同的情况 ，为什么改成%4.2f和%5.2f效果一样？ 
}

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
   scanf("%d%s%f",&student1.num,student1.name,&student1.score);//����ȥ���м��Ǹ�&�� 
   scanf("%d%s%f",&student2.num,student2.name,&student2.score);	
   printf("The higher score is:\n"); 
   if(student1.score>student2.score)
   printf("%d %s %5.2f\n",student1.num,student1.name,student1.score);//Ϊʲô��%6.2��2��С��������С���㹲6λ 
   else if(student2.score>student1.score)
   printf("%d %s %4.2f\n",student2.num,student2.name,student2.score);
   return 0;//δ������ѧ���ɼ���ͬ����� ��Ϊʲô�ĳ�%4.2f��%5.2fЧ��һ���� 
}

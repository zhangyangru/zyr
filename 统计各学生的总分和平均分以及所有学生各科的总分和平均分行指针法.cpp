#include<stdio.h>
int main()
{
   int a[5][4]={{98,78,88,87},{86,89,90,95},{94,80,77,93},{95,95,97,98},{90,84,89,90}};	
   int (*p)[4]=a;//定义行指针 
   int sum;
   int i,j; 
   float v;
   printf("各个学生各科总成绩及平均分：\n");
   for(i=0;i<5;i++)
   {
   	sum=0;
    for(j=0;j<4;j++)
    sum=sum+*(*(p+i)+j);
    v=sum/4.0;
    printf("%d  %.2f  \n",sum,v);
   }
   printf("\n");
   printf("所有学生各科总分及平均分：\n");
   for(i=0;i<4;i++)
   {
   	sum=0;
   	for(j=0;j<5;j++)
   	sum=sum+*(*(p+j)+i);
   	v=sum/5.0;
   	printf("%d  %.2f  \n",sum,v);
   }
	return 0;
}

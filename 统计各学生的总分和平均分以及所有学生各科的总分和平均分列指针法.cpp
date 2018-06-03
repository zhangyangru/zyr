#include<stdio.h>
int main()
{
   int a[5][4]={{98,78,88,87},{86,89,90,95},{94,80,77,93},{95,95,97,98},{90,84,89,90}};	
   int *p;//定义列指针 
   int sum;
   int i,j; 
   float v;
   printf("各个学生各科总成绩及平均分：\n");
   for(p=a[0];p<(a[0]+5);p++)//p要写成等于a[0],不能写成等于a,否则编译错误 
   {//这里的p不是列指针吗？这样写不是把行地址赋给了列指针? 
   sum=0;
   for(j=0;j<4;j++)
   sum=sum+*(p+j);
   v=sum/4.0;
   printf("%d  %.2f  \n",sum,v);
   }
    printf("\n");
    printf("所有学生各科总分及平均分：\n");
   for(i=0;i<5;i++)
   {
   sum=0;
   for(p=a[0];p<(a[0]+4);p++)
   sum=sum+*(p+i);
   v=sum/5.0;
   printf("%d  %.2f  \n",sum,v);//出来的总分和上面的一样，为什么？ 
   }
   return 0;
}
   
   

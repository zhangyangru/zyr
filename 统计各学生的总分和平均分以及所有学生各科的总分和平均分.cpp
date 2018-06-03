#include<stdio.h>
int main()
{
	int a[5][4]={{98,78,88,87},{86,89,90,95},{94,80,77,93},{95,95,97,98},{90,84,89,90}};
	int i,j,w=0,m=0;
	float v,p;
	printf("各学生的总分和平均分为：\n"); 
	for(i=0;i<5;i++)
	{
	w=0;
	for(j=0;j<4;j++)
	w=w+a[i][j];
	v=w/4.0;//改成w/4为什么样？ 
	printf("%d  %.2f\n",w,v);
    }
    printf("\n");
    printf("所有学生各科的总分和平均分\n"); 
    for(i=0;i<4;i++)
    {
    m=0;
    for(j=0;j<5;j++)
    m=m+a[j][i];
    //v=m/5;
   // printf("%d  %.2f\n",m,v);//为什么这样写是对的 
    printf("%d  %.2f\n",m,m/5.0); //为什么改成5.0就是对的？ 
   // printf("%d  %.2f\n",m,m/5);
    }
	return 0;
}

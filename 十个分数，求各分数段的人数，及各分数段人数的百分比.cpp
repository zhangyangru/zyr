#include<stdio.h>
int main()
{
	int a[10],m=0,i,j,b[6]={0},t;
	float v;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	m+=a[i];
	v=m/10;
	printf("平均成绩为%.1f",v);
	for(i=0;i<10;i++)
	{
		switch(a[i]/10)
		{
			case 0:case 1:case 2:case 3:case 4:case 5:b[0]++;break;
			case 6:b[1]++;break;
			case 7:b[2]++;break;
		    case 8:b[3]++;break;
		    case 9:b[4]++;break;
		    case 10:b[5]++;break;
		}
	}
	printf("按从低到高的分数段，依次输出各分数段的人数及其百分比为:\n");
	for(i=0;i<6;i++)
	printf("%d %.1f%%       ",b[i],(float)b[i]/10*100);/*不能以%d形式输出float型的数据,用强制类型转换*/ 
	printf("降序排列分数为：\n"); 
    for(i=0;i<9;i++)
	{
	   for(j=i+1;j<10;j++)
	   if(a[i]<a[j])
	   {
	   t=a[i];a[i]=a[j];a[j]=t;
       }
    }
    for(i=0;i<10;i++)
    printf("%d  ",a[i]);
} 


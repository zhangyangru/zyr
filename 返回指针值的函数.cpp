#include<stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4],int n);//函数声明，形参是指向一维数组的指针变量， 
	float *p;//定义浮点型的指针变量,指向一个数 
	int i,k; 
	printf("输入要找的学生序号");
	scanf("%d",&k);
	printf("第%d个学生的成绩是：\n",k);
	p=search(score,k);//调用search函数，返回score[k][0]的地址
	for(i=0;i<4;i++)//p接受第n行首地址 
	printf("%5.2f\t",*(p+i));//注意间距的确定,输出score[k][0]~score[k][3]的值
	return 0;
}
float *search(float(*pointer)[4],int n)//形参pointer是指向一维数组的指针变量 
{//pointer二维数组首地址 
	float *pt;//*pt指向一个浮点数的指针 
	pt=*(pointer+n);//相当于pointer[n] 
	return(pt);      int x=10;
}// float *a[5];a[0]={&x}

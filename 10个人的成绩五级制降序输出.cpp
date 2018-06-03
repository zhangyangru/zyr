#include<stdio.h>
int main()
{
	char a[10],c;/*int 也可以*/ 
	int i,j; 
	for(i=0;i<10;i++)
//	scanf("%c",&a[i]);/*注意必须要连续输入,中间不能有空格*/ 
    a[i]=getchar();
	for(i=0;i<9;i++) 
	for(j=i+1;j<10;j++)
	if(a[i]>a[j])
	{
	c=a[i];a[i]=a[j];a[j]=c;
    }
	for(i=0;i<10;i++)
	 printf("%c",a[i]);
	 return 0;/*成绩降序输出也就是以ABCDE的顺序输出，但是在排序时，是以Ascall码的升序输出*/ 
}

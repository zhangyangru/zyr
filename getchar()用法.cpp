#include<stdio.h>
int main()
{
	char c;
while((c = getchar()) != EOF){ putchar(c);}
}/*执行程序，输入：abc，然后回车。则程序就会去执行puchar(c)，然后输出abc，这个地方不要忘了，系统输出的还有一个回车。然后可以继续输入，再次遇到换行符的时候，程序又会把那一行的输入的字符输出在终端上。*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	char str[20];
	strcpy(str,"98993489");
	t=atoi(str);
	printf("�ַ���ֵ��%s,����ֵ��%d\n",str,t);
	strcpy(str,"abc");
	t=atoi(str);
	printf("�ַ���ֵ=%s,����ֵ��%d\n",str,t);
	return 0;
}

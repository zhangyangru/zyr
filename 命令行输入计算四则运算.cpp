#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{//argc:�����в����ĸ�����ÿ��������Ϊ�ַ������� 
     //*argv[]:�����в������ַ�ָ������ 
	int a,b;
	
//	scanf("%c",&argv[2]);
//	scanf("%c",&argv[3]);
    a=atoi(argv[1]);
	b=atoi(argv[3]);
	switch(argv[2][0])
	{
	case'+':printf("%d\n",a+b);break;
	case'-':printf("%d\n",a-b);break;
	case'*':printf("%d\n",a*b);break;
	case'/':if(b!=0)
	{
	printf("%d\n",a/b);break;
    }
	else 
	{
	printf("��������Ϊ0");break;
    }
	default:printf("�������\n");
    }
}

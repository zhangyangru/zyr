#include <stdio.h> 
char del(char x,char c,int n);//ע��Ҫ�ǵ�д�������� 
int main()//�������Ҫɾ���ַ����е�ָ���ַ�������ôд���� 
{
   char ch[10],c;//c��ָ�����ַ� 
   int i,j;
   gets(ch);
   printf("����Ҫɾ�����ַ���\n"); 
   c=getchar();
   printf("ɾ������ַ����ǣ�\n");
   for(i=0;ch[i];i++)
   {
   if(ch[i]==del(ch[i],c,10))//����ַ���ָ���ַ���һ�������ظ��ַ� 
   printf("%c",ch[i]);
   else
   continue;
   }
   return 0;
}


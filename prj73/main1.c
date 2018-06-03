#include <stdio.h> 
char del(char x,char c,int n);//注意要记得写函数声明 
int main()//考虑如果要删除字符串中的指定字符串该怎么写？？ 
{
   char ch[10],c;//c存指定的字符 
   int i,j;
   gets(ch);
   printf("输入要删除的字符：\n"); 
   c=getchar();
   printf("删除后的字符串是：\n");
   for(i=0;ch[i];i++)
   {
   if(ch[i]==del(ch[i],c,10))//如果字符与指定字符不一样，返回该字符 
   printf("%c",ch[i]);
   else
   continue;
   }
   return 0;
}


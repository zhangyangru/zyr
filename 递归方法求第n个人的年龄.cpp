#include <stdio.h>
int age(int n);
int main()
{
  int q,n;//��һ���˵�������10�� 
  scanf("%d",&n);//�����n���� 
  q=age(n);
  printf("%d",q);
  return 0;
} 
int age(int n)
{
 int f;
 if(n>1)
 f=age(n-1)+2;
 else if(n==1)
 f=10;
 return f;
}

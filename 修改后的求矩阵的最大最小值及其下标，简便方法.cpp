#include <stdio.h>
int i,j;//����ȫ�ֱ����������±� 
int max(int a[4][4],int **p1);//Ϊʲô��**p1?? 
int min(int a[4][4],int **p2);
int main()
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int *p1,*p2;
    p1=&a[0][0];//�������� 
    p2=&a[0][0];//����С���� 
    max(a,&p1);//��ָ�봫��ַ ��Ϊʲô����p�� 
    printf("�������ǣ�%d   ���±�Ϊ��%d , %d",*p1,i,j);
    printf("\n");
    min(a,&p2);//��ָ��������ַ��Ϊʲô����p�� 
    printf("��С������: %d   ���±�Ϊ��%d , %d",*p2,i,j);
	return 0;
} 
    int max(int a[4][4],int **p1)
    {
       int m,n;
       int v=0,u=0;
        for(m=0;m<4;m++)
        {
          for(n=0;n<4;n++)
          if(a[m][n]>a[u][v])
          {
      	  u=m,v=n;
          }
        }
         *p1=&a[u][v];//�������������˵�һ��Ԫ�� 
        i=u;
		j=v; 
   	} 
	int min(int a[4][4],int **p2)
	{ 
	 int m,n,v=0,u=0;
        for(m=0;m<4;m++)
        {
          for(n=0;n<4;n++)
          if(a[m][n]<a[u][v])
          {
      	  u=m,v=n;
          }
        }
        *p2=&a[u][v];//����Сֵ�����˵�һ��Ԫ�� 
        i=u;
		j=v; 
	}

#include <stdio.h>
int i,j;//����ȫ�ֱ����������±� 
int max(int a[4][4],int *p1);
int min(int a[4][4],int *p2);
int main()
{
	//int max_value; 
	//int min_value;
//	int max(int a[4][4],int *p1);
//	int min(int a[4][4],int *p2);
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int *p1,*p2;
    p1=&a[0][0];//�������� 
    p2=&a[0][0];//����С���� 
    //max_value=&a[
    max(a,p1);
    printf("�������ǣ�%d   ���±�Ϊ��%d , %d",*p1,i,j);
    printf("\n");
    min(a,p2);
    printf("��С������: %d   ���±�Ϊ��%d , %d",*p2,i,j);
	return 0;
} 
    int max(int a[4][4],int *p1)
    {
       int m,n;
//   	  int b[16],k=0;
//   	  int t,u,v;
//	  for(i=0;i<4;i++)
//	  {
//	  for(j=0;j<4;j++)
//	  b[k++]=a[i][j];//�Ѷ�ά����д��һά���� 
//      }
        int v=0,u=0;
        for(m=0;m<4;m++)
        {
          for(n=0;n<4;n++)
          if(a[m][n]>a[u][v])
          {
      	  u=m,v=n;
          }
        }
//       for(j=1;j<15;j++)
//       if(b[j]>b[u])
//       {
//       u=j;//��������±� 
//       }
//      *p1=b[u]; 
        *p1=a[u][v];
        i=u;
		j=v; 
   	} 
	int min(int a[4][4],int *p2)
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
        *p2=a[u][v];
        i=u;
		j=v; 
	}//�д����޸� 

#include<stdio.h>
int main()
{
	void sort(int array[10]);
	int a[10]={23,45,32,4,77,56,98,78,34,88},i;
	sort(a); 
	for(i=0;i<10;i++)
	printf("%d  ",a[i]);
	printf("\n");
	return 0;
}
void sort(int array[10])
{
     int i,k,j,t;//���ö���n,�β����Ѿ������ 
     for(i=0;i<9;i++)
     {
	  k=i;
	  for(j=i+1;j<10;j++) 
      if(array[j]<array[k])//����д��a[j],Ӧ�����β��еı���һ�� 
      k=j;
      t=array[k];array[k]=array[i];array[i]=t;
     }
}

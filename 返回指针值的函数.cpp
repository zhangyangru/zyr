#include<stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4],int n);//�����������β���ָ��һά�����ָ������� 
	float *p;//���帡���͵�ָ�����,ָ��һ���� 
	int i,k; 
	printf("����Ҫ�ҵ�ѧ�����");
	scanf("%d",&k);
	printf("��%d��ѧ���ĳɼ��ǣ�\n",k);
	p=search(score,k);//����search����������score[k][0]�ĵ�ַ
	for(i=0;i<4;i++)//p���ܵ�n���׵�ַ 
	printf("%5.2f\t",*(p+i));//ע�����ȷ��,���score[k][0]~score[k][3]��ֵ
	return 0;
}
float *search(float(*pointer)[4],int n)//�β�pointer��ָ��һά�����ָ����� 
{//pointer��ά�����׵�ַ 
	float *pt;//*ptָ��һ����������ָ�� 
	pt=*(pointer+n);//�൱��pointer[n] 
	return(pt);      int x=10;
}// float *a[5];a[0]={&x}

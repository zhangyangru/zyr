#include<stdio.h> 
int main()
{
	int i,j,n,t,k;
	int a[100]={0,10,20,30,40,50};
	scanf("%d",&n);//n��ʾҪ�����Ԫ�ظ���
	for(i=0;i<n;i++) 
	{
		scanf("%d",&t);
		for(j=0;j<6+i;j++)	//6��ʾԭ���鳤�ȣ��Լ�ȷ�� 
		{
			if(t<a[j])
			{
				for(k=5+i;k>=j;k--)
				{
					a[k+1]=a[k];//ʹ����Ԫ�غ��� 
				}
				a[j]=t;
				break;
			}	
		}
		a[j]=t;		//�������Ԫ�ش���ԭ�������ֵ��ֱ�Ӳ��뵽��� 
	}  
	for(i=0;i<6+n;i++)
		printf("%d ",a[i]);
}


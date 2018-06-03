#include<stdio.h> 
int main()
{
	int i,j,n,t,k;
	int a[100]={0,10,20,30,40,50};
	scanf("%d",&n);//n表示要插入的元素个数
	for(i=0;i<n;i++) 
	{
		scanf("%d",&t);
		for(j=0;j<6+i;j++)	//6表示原数组长度，自己确定 
		{
			if(t<a[j])
			{
				for(k=5+i;k>=j;k--)
				{
					a[k+1]=a[k];//使数组元素后移 
				}
				a[j]=t;
				break;
			}	
		}
		a[j]=t;		//如果插入元素大于原数组最大值，直接插入到最后 
	}  
	for(i=0;i<6+n;i++)
		printf("%d ",a[i]);
}


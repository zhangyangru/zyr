#include <stdio.h>
int main()
{
	int a[20];
	int n,i,j,t,k;
	while(scanf("n=%d",&n)!=EOF)
{
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
//��������������n������������ǰָ������ĸ���������ô�䣿
	for(i=0;i<n-1;i++)
	{ 
	 for(j=i+1;j<n;j++)
     if(a[i]<a[j])
     {
     t=a[i];a[i]=a[j];a[j]=t;
     }
    }
//    for(i=0;i<n-1;i++)
//    {
//      if(a[i]<a[i+1])
//      printf("%d ",a[i]);
//    }
//    printf("%d",a[n-1]);//��һ�ֲ��صķ���


         /*  for(i=0;i<n;i++)
            {
      	      if(a[i]<a[i+1])
      	      printf("%d ",a[i]);
	        }Ϊʲôд������Ҳ�ǶԵģ�*/ 

         for(i=0;i<n-1;i++)
         {
		   for(j=i+1;j<n;j++)
		   {
              if(a[i]==a[j])
              {
               for(k=j;k<n-1;k++)
               a[k]=a[k+1];
               n--;
              }
	       }
         }
         for(i=0;i<n;i++)
         printf("%d ",a[i]);//�ڶ��ֲ��صķ��� 
         //�����ֲ��صķ����ǣ��Ե�һ��ΪĿ�꣬��ͷ��β���أ����Եڶ���ΪĿ�꣬�ӵڶ�����ʼ��β���� 
         //ȥ���ظ��ģ����鳤�ȼ��٣����Ƶ����ַ����� 
	return 0; 
}
}

#include <stdio.h>
int main()
{
   int a[20];
   int b[20];
   int i,j,n,p=0,q;
   int prime(int a);//�ж��������� 
   int k; 
   void sort(int b[],int n,int m,int k);//n��m�ֱ�����������ʼλ�ú���ֹλ�� 
   scanf("n=%d:",&n);
   q=n-1;
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);	
   if(prime(a[i])==1)
   b[q--]=a[i];//������
   else if(prime(a[i])==-1)
   b[p++]=a[i];
   }
   sort(b,0,p-1,1);//kΪ1������
   sort(b,p,n-1,-1);//kΪ-1�ǽ���
   return 0;
}

int prime(int a)
{
	int i,k;
	for(i=2;i<a;i++)
	{
	  if((a%i)==0)
	  break;
    }
    if(i==a)
    return 1;
    else if(i<a)
    return -1;
}
  void sort(int b[],int n,int m,int k)
{
   	int i,j,t;
   	for(i=n;i<m;i++)
   	{
	   for(j=i+1;j<=m;j++)
	   {  
          if(k==1)
         {
      	   if(b[i]>b[j])
            {
      	    t=b[i];b[i]=b[j];b[j]=t;
            }
	     }
          else if(k==-1)
          {
          	if(b[i]<b[j])
          	{
          	t=b[i];b[i]=b[j];b[j]=t;
            }
		  }
       }
   }
   for(i=n;i<=m;i++)
   printf("%d ",b[i]);
}
   
   
   
   
   

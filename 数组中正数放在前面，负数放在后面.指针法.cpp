#include<stdio.h>
int main()
{
	 int a[10];
	 int b[10];//���Բ�����ֵ0��ֵΪ����� 
	 int i,j=9,*p1,*p2;//����ָ�����
	 p2=b+9; //p2ָ��b�����ĩβ 
	 p1=b;//p1ָ��b����Ŀ�ͷ  
	 for(i=0;i<10;i++)
	 scanf("%d",&a[i]);//����ѭ��i=10 
	 for(i=0;i<10;i++)
	 {
	    if(a[i]>=0)
	    {
	    	//	p2=p1; //��������д����һ����ַ������һ����ַ 
	    	*p1=a[i];
	    	p1++;
	    }
	    else
		if(a[i]<0)
	    {		
		  *p2=a[i];
		  p2--;
	    }
      }
	for(i=0,p1=b;i<10&&p1<(b+10);i++,p1++)
	{
	 a[i]=*p1;
	 printf("%d  ",a[i]);
    }
    return 0;
 } 
 

#include<stdio.h>
int main()
{
	/*int a[4][4];
   int b[16];//����ά����ת��Ϊһά���� 
   int i,j,k=0,t;
   for(i=0;i<4;i++)
   for(j=0;j<4;j++)
   scanf("%d",&a[i][j]);
   for(i=0;i<4;i++)
   {
    for(j=0;j<4;j++)
    b[k++]=a[i][j];
   } 
       for(i=0;i<15;i++)
       {
          for(j=i+1;j<16;j++)
            if(b[i]>b[j])
          {
           t=b[i];b[i]=b[j];b[j]=t;
          }
        }
         	for(i=0;i<4;i++)
	        a[i][i]=b[i];
         	k=4;
    	         for(i=0;i<4;i++)
	             {
	                 for(j=0;j<4;j++)
	                 {
	                  if(i!=j)
	                  a[i][j]=b[k++];
	                 }
                 }
        for(i=0;i<4;i++)
        { 
        for(j=0;j<4;j++)
        printf("%3d  ",a[i][j]);
        printf("\n");//˼��ֱ�ӽ���С������Խ��ߵ��������ķ��� 
        } //˼����ά�������ֱ��ѡ�������� 
}
*/ 
	int a[4][4];
	int b[16];
	int (*q)[4],*p1,i,j,*p2,t;//������ָ���������ָ����� 
	p2=b;//p2ָ��b����Ŀ�ͷ 
	for(q=a;q<(a+4);q++) 
	 for(p1=*q;p1<(*q+4);p1++)
	 scanf("%d",p1);
        for(q=a;q<(a+4);q++)
         for(p1=*q;p1<(*q+4);p1++,p2++)
	     *p2=*p1;//��a�����ֵ����b���� 
	      for(p1=b;p1<(b+15);p1++)//��p1ָ��b����Ŀ�ͷ 
	    {
	       for(p2=(p1+1);p2<(b+16);p2++)
	       if(*p1>*p2)
	       {
	       t=*p1;*p1=*p2;*p2=t;
	       }
	    }
	     q=a;//qΪ��ָ�������
			p2=b; //p2Ϊ��ָ����� 
	        for(i=0;i<4;i++)
	        {
	           *(*(q+i)+i)=*p2;
			   p2++; 
		    }
		        q=a;
	            for(i=0;i<4;i++)
	            {
	              for(j=0;j<4;j++)
	              {
	          	  if(i!=j)
	          	  {
	          	  *(*(q+i)+j)=*p2;
	          	  p2++;
	              }
	              }
			    }
	        	    for(q=a;q<(a+4);q++) 
	        	    {
	                for(p1=*q;p1<(*q+4);p1++)
	                   printf("%3d  ",*p1);
	                   printf("\n");
                    } 
             return 0;
}

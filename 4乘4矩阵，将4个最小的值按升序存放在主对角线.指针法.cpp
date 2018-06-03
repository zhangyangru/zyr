#include<stdio.h>
int main()
{
	/*int a[4][4];
   int b[16];//将二维数组转置为一维数组 
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
        printf("\n");//思考直接将最小的数与对角线的数交换的方法 
        } //思考二维数组可以直接选择法排序吗？ 
}
*/ 
	int a[4][4];
	int b[16];
	int (*q)[4],*p1,i,j,*p2,t;//定义行指针变量和列指针变量 
	p2=b;//p2指向b数组的开头 
	for(q=a;q<(a+4);q++) 
	 for(p1=*q;p1<(*q+4);p1++)
	 scanf("%d",p1);
        for(q=a;q<(a+4);q++)
         for(p1=*q;p1<(*q+4);p1++,p2++)
	     *p2=*p1;//把a数组的值赋给b数组 
	      for(p1=b;p1<(b+15);p1++)//让p1指向b数组的开头 
	    {
	       for(p2=(p1+1);p2<(b+16);p2++)
	       if(*p1>*p2)
	       {
	       t=*p1;*p1=*p2;*p2=t;
	       }
	    }
	     q=a;//q为行指针变量，
			p2=b; //p2为列指针变量 
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

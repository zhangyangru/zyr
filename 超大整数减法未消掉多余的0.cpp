#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];//不用int型因为int 型最多存入32 位数字，long int 4个字节，4*8=32位 
	char c[100],t[100],z[100],d[100];//c存储减法运算后的结果 ,t数组用来交换 
	int i,j,m,n,k,p,q,s,r,w;
	scanf("%s",&a);
	scanf("%s",&b);
	m=strlen(a);//只是计算有效字符的长度 
  	k=n=strlen(b);//
	    if(m>k)
	    k=m; //k为a和b字符串长度的较大的 
	    strcpy(z,a);strcpy(d,b);//把a数组的字符复制到z数组，把b数组的字符复制到d数组 
	    if(n==m)
    	{
	         if(strcmp(a,b)<0)
	        {
	        strcpy(t,a);strcpy(a,b);strcpy(b,t);//a b数组交换，交换完将大的放在a数组，小的放在b数组 
            }
            r=m;//注意r和w要初始化，不然是随机数 
            w=n;
	    }
    	if(m<n)//前面的数短，后面的数长 
    	{
    	strcpy(t,a);strcpy(a,b);strcpy(b,t);//交换完将长的放在a数组，短的放在b数组
    	r=n;//r是长数组的长度，w是短数组的长度 
    	w=m;
        } 
        if(m>n)
        {
         r=m;//把长数组的长度赋给r,把短数组的长度赋给w 
	     w=n;	
	    }
	          for(i=k-1,j=0;i>=0&&j<r;i--,j++)//逗号表达式的值为最后一个式子的值 
	          a[i]=a[r-1-j];  
	          for(i=k-1,j=0;i>=0&&j<w;i--,j++)
	          b[i]=b[w-1-j];
	              for(i=0;i<k-w;i++)
	                b[i]='0';//注意：要让前面空出的位等于0这个字符，而不是等于'\0'结束符,也不是直接等于0这个数字 
	p=0;//记p为借位 
	for(i=k-1,j=k-1;j>=0&&i>=0;j--,i--)//i和j一样的，可以用其中一个来代替 
	{
	  	q=(a[i]-48-(b[j]-48)-p);//将字符转换为数字，两者相减后的结果 
	   	if(q<0)
	   	{ 
	      q=q+10;
	      p=1; 
	    }
	    else
	    {
	      p=0; 
		}
	    c[i]=q+48;//将数字转换为字符
	} 
	        if(m>n) 
	        {
	          for(i=0;i<k;i++)
	          printf("%c",c[i]);
            }
            else
            if(m<n)
            {
            printf("-");
	        for(i=0;i<k;i++)	
	        printf("%c",c[i]);	
			}
            else
            {
	        if(((m==n)&&(strcmp(z,d)<0)))
	        {
	        printf("-");
	        for(i=0;i<k;i++)	
	        printf("%c",c[i]);
            }
            if(((m==n))&&(strcmp(z,d)>0))
            {
            for(i=0;i<k;i++)	
	        printf("%c",c[i]);
	        }
	        }
	  return 0;
}


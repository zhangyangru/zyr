#include <stdio.h>
enum color{red,yellow,white,blue,black};//试一下在main()中
int main()//为什么void不行？？要用int ??
{
	enum color b[3];
	int i,count=0;
	for(b[0]=red;b[0]<=black;b[0]++)
		for(b[1]=red;b[1]<=black;b[1]++)
			for(b[2]=red;b[2]<=black;b[2]++)
		      if(b[0]!=b[1]&&b[0]!=b[2]&&b[1]!=b[2])
		      {
		      	count++;
		      	printf("No.%-2d",count);//数据占2列，数据向左靠，右端补空隔
		      	for(i=0;i<3;i++)
		      	{
		      		switch(b[i])
		      		{
					 case red;
					 printf("红");
					 case yellow;
					 printf("黄");
					 case white;
					 printf("白");
					 case blue;
					 printf("蓝");
					 case black;
					 printf("黑");
				    }
				}
				if(count%5==0)
				printf("\n");
				else
				//printf("\t");
			}
}

#include <stdio.h>
enum color{red,yellow,white,blue,black};//��һ����main()��
int main()//Ϊʲôvoid���У���Ҫ��int ??
{
	enum color b[3];
	int i,count=0;
	for(b[0]=red;b[0]<=black;b[0]++)
		for(b[1]=red;b[1]<=black;b[1]++)
			for(b[2]=red;b[2]<=black;b[2]++)
		      if(b[0]!=b[1]&&b[0]!=b[2]&&b[1]!=b[2])
		      {
		      	count++;
		      	printf("No.%-2d",count);//����ռ2�У��������󿿣��Ҷ˲��ո�
		      	for(i=0;i<3;i++)
		      	{
		      		switch(b[i])
		      		{
					 case red;
					 printf("��");
					 case yellow;
					 printf("��");
					 case white;
					 printf("��");
					 case blue;
					 printf("��");
					 case black;
					 printf("��");
				    }
				}
				if(count%5==0)
				printf("\n");
				else
				//printf("\t");
			}
}

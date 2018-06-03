#include<stdio.h>
enum Color{red = 1,yellow,blue,white,black};
void print(int color)
{
	switch(color)
	{
		case red:printf("%-10s","red");break;
		case yellow:printf("%-10s","yellow");break;
		case blue:printf("%-10s","blue");break;
		case white:printf("%-10s","white");break;
		case black:printf("%-10s","black");break;
		default:break;
	}
}
int main()
{
	enum Color pri; int i,j,k;
	int n,loop;
	n=0;
	for(i= 1; i <= 5; i++)
	{
		for(j=1; j <= 5; j++)
		{
			for(k = 1; k <= 5; k++)
		 	if(i != j && j != k && i != k)
		 	{
		 	  n=n+1;
		 	  printf("%d ",n);
		 	  print(i); print(j);print(k);
			}
			 printf("\n");
			}
	}
	printf("\ntotal:%5d\n",n);
	return 0;
}


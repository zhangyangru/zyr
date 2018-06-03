#include<stdio.h> 
void man()//互满数 
{
	    int sum=0,j,c,h=0,i;
	    for(i=1;i<10000;i++)
	    {
	    sum=h=0;	
    	for(j=1;j<i;j++)
    	{
    	if(i%j==0)
	    sum=sum+j;
        }
        if(sum<10000&&sum>i)
        {
        for(c=1;c<sum;c++)
        {
        if(sum%c==0)
        h=h+c;
        }
        if(h==i)
        printf("%d 和 %d互为互满数  ",sum,i);
        }
        }
}
int main()
{
printf("10000以内的互满数为：\n");
	man();
	return 0;
}

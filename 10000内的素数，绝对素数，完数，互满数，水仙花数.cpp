#include <stdio.h>
int sushu(int i);
void juedui()//�������� 
{
    int p,w,j,i,q=0;
	for(p=2;p<10000;p++)
	{
	i=sushu(p);
	if(i!=0)
	{ 
		if(i<10)
		printf("%d  ",i);
		else
		if(i>=10&&i<100)
        w=(i%10)*10+(i/10);
        else
		if(i>=100&&i<1000)
	     w=(i/100)+((i%100)/10)*10+((i%100)%10)*100;
        else
        if(i>=1000&i<10000)
        w=(i/1000)+((i%1000)/100)*10+(((i%1000)%100)/10)*100+(((i%1000)%100)%10)*1000; 
	 for(j=2;j<w;j++)	
     {
	  if(w%j==0)
	  break;
     }
    if(j==w)
    {
      q++;
      if((q%7)!=0)
      printf("%5d",w);
      else
      {
      printf("\n");
      printf("%5d",w);
      }
    }  
  }
}
}

int sushu(int i)//���� 
{
	int j;
   for(j=2;j<i;j++)	
   {
	if(i%j==0)
	break;
   }
   if(j==i)
   {
   return i;
   }
   else
   return 0;
}

int hua(int i)//ˮ�ɻ��� 
{ 
 int p,q,w,r;
   p=i/100;
   q=(i%100)/10;
   w=(i%100)%10;
   r=p*p*p+q*q*q+w*w*w;
   if(r==i)
   return i;
   else
   return 0;
}

int wan(int i)//���� 
{
	int sum=0,j;
	for(j=1;j<i;j++)
	{
	if(i%j==0)
	sum=sum+j;
    }
    if(sum==i)
    printf("%d  ",i);
}
void man()//������ 
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
        printf("%d �� %d��Ϊ������  ",sum,i);
        }
        }
}

int main()
{
	int i,m;
	printf("10000���ڵ�����Ϊ:\n");
	for(i=2;i<10000;i++)
	{
	m=sushu(i);
	if(m!=0)
	printf("%d  ",m);
    }
    printf("\n");
    printf("10000���ڵ�ˮ�ɻ�����\n");
	for(i=100;i<1000;i++)
	{
	if((hua(i))!=0)
	printf("%5d ",hua(i));
    }
    printf("\n");
	printf("10000���ڵ�����Ϊ: \n");
	for(i=1;i<10000;i++)
	wan(i);
	printf("\n");
	printf("10000���ڵľ�������Ϊ��\n");
	juedui();
	printf("\n");
	printf("10000���ڵĻ�����Ϊ��\n");
	man();
	return 0;
}



   

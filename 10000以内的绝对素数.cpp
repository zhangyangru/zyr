#include <stdio.h>
int sushu(int i);//声明写在开头 
void juedui()//绝对素数 
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
int sushu(int i)//素数 
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
int main()
{
printf("10000以内的绝对素数为：\n");
juedui();
return 0;
}

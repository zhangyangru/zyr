#include<stdio.h>
int main()
{
	char c[20],t;
	int i,j,q=0,m;
	for(i=0;i<20;i++)
	{
	scanf("%c",&c[i]);
	if(c[i]!='\n')
	q++;
	else
	break;
    }
    for(j=0;j<q;j++)
	printf("%c",c[j]);
	printf("\n");
      m=((float)q-1)/2;
       for(j=q-1,i=0;j>m&&i<m;j--,i++)
       {
       t=c[i];c[i]=c[j];c[j]=t;
       }
    for(i=0;i<q;i++)
	printf("%c",c[i]);
}
    
      
      
      
      
      

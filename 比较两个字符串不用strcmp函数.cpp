#include<stdio.h>
int main()
{
	int i,j;
	char s1[6];
	char s2[6];
	gets(s1);//字符串有效为5个字符 
	gets(s2);
	for(i=0,j=0;i<6,j<6;i++,j++)
	{
    	if(s1[i]>s2[j])
	    {
	    printf("1");
	    break;
	    } 
	    else
	    if(s1[i]<s2[j])
	    {
	     printf("-1\n");
	     break;
        }
        else
        if(s1[i]==s2[j])
        {
        	continue;
        }
	}
	if(i==6)
	printf("0\n");
}

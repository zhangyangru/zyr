#include <stdio.h>
#include <string.h>
int main()
{
	char c[80],ch;
	int n,i,j;
	i=0;
	while(!feof(stdin))
{
	gets(c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
    if(c[i]<97)
    c[i]=c[i]+32;//先把大写改成小写
    }
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
     if(c[i]>c[j])
     {
   	 ch=c[i];
   	 c[i]=c[j];
   	 c[j]=ch;
     }
    for(i=0;i<n-1;i++)
    {
   	  if(c[i]<c[i+1])
   	  {
         printf("%c",c[i]);
      }
    }
    printf("%c",c[n-1]);
    printf("\n");
}
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
 char s[81],c;
  int i,j,k,n;
  while(scanf("%s",s)!=EOF)
 {
   n=strlen(s);
   for(i=0;i<n;i++)
   if(s[i]>='A'&&s[i]<='Z')  s[i]=s[i]+32;
   for(i=0;i<n-1;i++)
    {
      k=i;
      for(j=i;j<n;j++)
      if(s[k]>s[j]) k=j;
      if(k!=i)
       {
          c=s[i];
          s[i]=s[k];
          s[k]=c;
       }
    }
     for(i=0;i<n-1;i++)
     {
       for(j=i+1;j<n;j++)
       if(s[i]==s[j])
     {
       for(k=j;k<n-1;k++)
       s[k]=s[k+1];
       j--;n--;
     }
    }
    for(i=0;i<n;i++)
printf("%c",s[i]);
printf("\n");
 }
return 0;
}



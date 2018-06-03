#include<stdio.h>
#include<string.h>
int main()
{
   char a[35];
   char b[30];
   char c[35];
   char d[30];
   gets(a);
   gets(b);
   strcpy(c,a);
   strcpy(d,b);
   puts(c);
   puts(d);	
}


#include<stdio.h>
#include<string.h>
int k;
char string(char c[],int n);
int main()
{
	char ch[10];
	gets(ch);//�ǵ�дch 
	k=strlen(ch);
    string(ch,10);
    return 0;
}
char string(char c[],int n)
{
	int i,j;
	for(i=0,j=k-1;c[i]&&j>=0;i++,j--)
	{	
	if(c[i]==c[j])
	continue;
	else
	break;
    }
	if(j<0)
	printf("YES");
//	return "YES";
	else
//	return "NO";//��ô������YES��NO 
	printf("NO");
 } 

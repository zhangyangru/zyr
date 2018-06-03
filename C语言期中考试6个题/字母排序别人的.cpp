#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],c[20];
	int i,l;
	while(!(feof(stdin)))
	{
		int aa[26]={0};
		l=strlen(gets(ch));
		for(i=0;i<l;i++)
		{
			if(ch[i]>='A'&&ch[i]<='Z') ch[i]+=32;
			aa[ch[i]-'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(aa[i]) printf("%c",i+'a');
		}
		printf("\n");
	}
	gets(c);//为什么加个gets
	return 0;
}


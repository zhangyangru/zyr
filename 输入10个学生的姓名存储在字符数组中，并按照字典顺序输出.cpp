#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][12],t[1][12];
	int i,j;
//	for(i=0;i<10;i++)
//	for(j=0;j<12;j++)
//	scanf("%c",&name[i][j]);//此方法可行吗？ 
	for(i=0;i<10;i++)
	gets(name[i]);
	for(j=0;j<9;j++)
	for(i=j+1;i<10;i++)
	if(strcmp(name[j],name[i])>0)
	{
	t[0]=name[j];name[j]=name[i];name[i]=t[0];
    }
    for(i=0;i<10;i++)
	//for(j=0;j<12;j++)
	printf("%c",name[i]);//此程序有错误 
 } 

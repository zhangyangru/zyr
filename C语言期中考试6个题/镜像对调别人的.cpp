#include<stdio.h>
int main()
{
	int m,n,aa[100][100],i,j,bb[100][100],k;
	char ch[100];
	while(!feof(stdin))
	{
		scanf("%d*%d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&aa[i][j]);
			}
		for(i=0;i<m;i++)
		{
			k=n-1;
			for(j=0;j<n;j++)
			{
				bb[j][i]=aa[i][k--];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%4d",bb[i][j]);
			}
			printf("\n");
		}
	}
	gets(ch);
	return 0;
}


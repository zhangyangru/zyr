#include<stdio.h>
int main(void)
{
	int next[4][2]=
	{
		{0, 1},
		{1, 0},
		{0, -1},
		{-1, 0}
	};
	int i, j, n, b, s = 1, x = 1, y = 1, tx, ty;
	scanf("%d", &n);
	int book[n+1][n+1] = {0};
	int num[n+1][n+1];
	num[1][1] = s++;
	book[1][1] = 1;
	do
	{
		b = 0;
		for(i=0; i<4; i++)
		{
			while(1)
		{
			tx = x + next[i][0];
			ty = y + next[i][1];
			if(tx >0 && tx <= n && ty > 0 && ty <= n && book[tx][ty] == 0)
			{
				num[tx][ty] = s++;
				book[tx][ty] = 1;
				x = tx;
				y = ty;
			}
			else
			break;
		}
		}
		
		for(i=1;i<=n;i++) //ÅÐ¶ÏÊÇ·ñÌî³äÍê±Ï 
	{
		for(j=1;j <= n;j++)
		{
			if(book[i][j] == 0)
			b = 1;
		}
	}
	}while(b); 
	
	for(i = 1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%5d ", num[i][j]);
		}
		putchar('\n');
	}
	
	
	return 0;
 } 

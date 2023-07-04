#include<stdio.h>

int main()
{
	int i, j, a, c[1000][1000], g, h, A, B, x, y, q, count;
	count = 0;
	q = 0;
	scanf("%d", &a);
	scanf("%d %d", &g, &h);
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < a; j++)
		{
			c[j][i] == 1;
		}
	}
	for(i = 0; i < g; i++)
	{
		scanf("%d %d", x, y);
		c[x][y] == 2;
	}
	for(i = 0; i < h; i++)
	{
		count++;
		scanf("%d %d", &A, &B);
		if(c[A][B] == 2)
		{
			q = count;
		}
	}
	if(q == 0)
	{
		printf("-1");
	}
	else
	{
		printf("q");
	}
	return 0;
}

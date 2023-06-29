#include<stdio.h>

int main()
{
	int arr[100][100], best, i, j, a, b, cs, x, y;
	best = 0;
	scanf("%d %d", &a, &b);
	for(i = 0; i < b; i++)
	{
		for(j = 0; j < a; j++)
		{
			scanf("%d\n", &arr[i][j]);
		}
	}
	for(i = 0; i < b; i++)
	{
		for(j = 0; j < a; j++)
		{
			cs = arr[i][j] + arr[i - 1][j] + arr[i][j - 1] + arr[i + 1][j] + arr[i][j + 1];
			if(cs > best)
			{
				best = cs;
				x = j + 1;
				y = i + 1;
			}
		}
	}
	printf("%d %d %d", x, y, best);
	return 0;
}

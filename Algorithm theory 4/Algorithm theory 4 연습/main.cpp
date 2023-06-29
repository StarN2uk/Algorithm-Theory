#include<stdio.h>

int main()
{
	int arr[100][100] = {0, };
	int i, n, x, y, sum, j, k;
	sum = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		for(j = y; j < y + 10; j++)
		{
			for(k = x; k < x + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	for(i = 0; i <= 100; i++)
	{
		for(j = 0; j <= 100; j++)
		{
			sum += arr[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}

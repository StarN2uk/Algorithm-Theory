
#include<stdio.h>

int main()
{
	int i, j, n, max = 0, d[1001], a[1001];	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++)
	{
		d[i] = 1;
		for (j = 1; j < i; j++)
		{
			if (a[j] < a[i] && d[i] < d[j] + 1)
			{
				d[i] = d[j] + 1;
			}
		}
		if (max < d[i])
		{
			max = d[i];
		}
	}
	printf("%d", max);
	return 0;
}

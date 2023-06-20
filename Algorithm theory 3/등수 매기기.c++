#include<stdio.h>

int main()
{
	int i, j, n, a[1000], r[1000];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++)
	{
		r[i] = 1;
		for(j = 0; j < n; j++)
		{
			if (a[i] < a[j])
			{
				r[i]++;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d\n", r[i]);
	}
	return 0;
}

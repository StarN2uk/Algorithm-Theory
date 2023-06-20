#include<stdio.h>

int main()
{
	int max = 0, n, max_score = 0, min_score = 100, a[100000], sum;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if (max_score < a[i])
		{
			max_score = a[i];
		}
		if (min_score > a[i])
		{
			min_score = a[i];
		}
		sum += a[i];
	}
	sum = (sum - max_score - min_score) / (n - 2);
	
	printf("%d", sum);
	return 0;
}

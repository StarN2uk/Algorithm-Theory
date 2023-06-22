#include<stdio.h>

int main()
{
	int i, N, a[1000], sum = 0, A;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = N - 2; i >= 0; i--)
	{
		if(a[i + 1] <= a[i])
		{
			A = a[i] - a[i + 1] + 1;
			sum += A;
			a[i] = a[i] - A;
		}
	}
	printf("%d", sum);
	return 0;
	
}

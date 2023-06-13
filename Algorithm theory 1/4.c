#include<stdio.h>

int main()
{
	long long N, M, i;
	scanf("%lld %lld\n%lld", &N, &M, &i);
	if (N / M == (i - 1) / M)
	{
		printf("0");
	}
	else
	{
		print("%lld", i % M);
	}
	return 0;
}

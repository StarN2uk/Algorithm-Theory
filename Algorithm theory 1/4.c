#include<stdio.h>

int main()
{
	long long N, M, i;
	scanf("%lld %lld %lld", &N, &M, &i);
	if (N / M == (i - 1) / M)
		printf("0");
	else printf("%lld", (i - 1) / (M + 1));
	return 0;
}

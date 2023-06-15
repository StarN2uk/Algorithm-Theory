#include<stdio.h>

int main()
{
	int N, K, cnt, a, i;
	cnt = 0;
	a = 0;
	scanf("%d %d", &N, &K);
	for (i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			cnt++;
			if (cnt == K)
			{
				a = i;
				break;
			}
		}
	}
	printf("%d", a);
	return 0;
}

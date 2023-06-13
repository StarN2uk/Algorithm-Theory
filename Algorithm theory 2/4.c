#include<stdio.h>

int main()
{
	int N, M, cnt, i, j;
	cnt = 0;
	scanf("%d %d", &N, &M);
	for (i = N; i <= M; i++)
	{
		for(j = 2; j * j <= i; j++)
		{
			if((i % j) == 0)
			{
				break;
			}
		}
		if(j * j > i)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}

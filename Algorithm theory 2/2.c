#include<stdio.h>

int main()
{
	int N, i, j, cnt, A[1000], B[1000];
	cnt = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	for (j = 0; j < N; j++)
	{
		scanf("%d", &B[j]);
		if (A[j] == B[j])
		{
			cnt += 1;
		}
	}
	printf("%d", cnt);
	return 0;
}

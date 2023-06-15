#include<stdio.h>

int main()
{
	int i, cnt, A[1000], a;
	cnt = 0;
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] == a)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}

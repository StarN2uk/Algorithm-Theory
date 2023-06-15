#include<stdio.h>

int main()
{
	int i, j, A_cnt, B_cnt, A[1000], B[1000];
	A_cnt = 0;
	B_cnt = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &A[i]);
	}
	for (j = 0; j < 10; j++)
	{
		scanf("%d", &B[j]);
		if (A[j] == B[j])
		{
			
		}
		else if (A[j] > B[j])
		{
			A_cnt++;
		}
		else if (A[j] < B[j])
		{
			B_cnt++;
		}
	}
	if (A_cnt == B_cnt)
		{
			printf("D");
		}
		else if (A_cnt > B_cnt)
		{
			printf("A");
		}
		else if (A_cnt < B_cnt)
		{
			printf("B");
		}
	return 0;
}

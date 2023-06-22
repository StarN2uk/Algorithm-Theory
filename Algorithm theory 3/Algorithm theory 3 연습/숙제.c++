#include<stdio.h>

int main()
{
	int i, A_cnt, B_cnt, A[1000], B[1000], count, current_winner;
	A_cnt = 0;
	B_cnt = 0;
    count = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &A[i]);
	}
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &B[i]);
		if (A[i] == B[i])
		{
			A_cnt++;
            B_cnt++;
            count++;
		}
		else if (A[i] > B[i])
		{
			A_cnt += 3;
            current_winner = 0;
		}
		else if (A[i] < B[i])
		{
			B_cnt += 3;
            current_winner = 1;
		}
	}
	if (count == 10)
	{
        printf("%d %d\n", A_cnt, B_cnt);
		printf("D");
	}
	else if (current_winner == 0)
	{
        printf("%d %d\n", A_cnt, B_cnt);
		printf("A");
	}
	else if (current_winner == 1)
	{
        printf("%d %d\n", A_cnt, B_cnt);
		printf("B");
	}
	return 0;
}

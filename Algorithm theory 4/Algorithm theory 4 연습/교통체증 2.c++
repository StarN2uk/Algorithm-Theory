#include<stdio.h>

int main()
{
	int i, j, from, to, a, b, thing, A[5] = {0, 0, 0, 0, 0};
	scanf("%d", &a);
	scanf("%d", &b);
	for(i = 0; i < b; i++)
	{
		scanf("%d %d %d", &from, &to, &thing);
		A[to - 1] += thing;
		A[from - 1] -= thing;
	}
	for(i = 0; i < 5; i++)
	{
		if(A[i] > 0)
		{
			printf("%d ", i + 1);
		}
		else
		{
			
		}
	}
	return 0 ;
}

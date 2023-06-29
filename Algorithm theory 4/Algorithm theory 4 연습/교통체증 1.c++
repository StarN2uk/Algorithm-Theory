#include<stdio.h>

int main()
{
	int i, j, from, to, arr[100][100], a, b, thing;
	scanf("%d", &a);
	scanf("%d", &b);
	for(i = 0; i < b; i++)
	{
		scanf("%d %d %d", &from, &to, &thing);
		arr[to][from] = thing;
	}
	for(i = 1; i <= a; i++)
	{
		for(j = 1; j <= a; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0 ;
}

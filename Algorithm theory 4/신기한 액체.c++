#include<stdio.h>

int main()
{
	int arr[100][100], a, b, x, y, i, j;
	scanf("%d %d", &a, &b);
	for(i = 0; i < b; i++)
	{
		for(j = 0; j < a; j++)
		{
			scanf("%d", &arr[i][j]);
			if(arr[i][j] == 2)
			{
				x = j;
				y = i;
			}
		}
	}
	while(!(arr[x + 1][y] && arr[x][y + 1]))
	{
		if(!arr[x][y + 1])
		{
			y++;
		}
		if(!arr[x + 1][y])
		{
			x++;
		}
	}
	printf("%d %d", x, y);
	return 0;
}

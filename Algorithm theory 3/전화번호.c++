#include<stdio.h>

int main()
{
	int i, t, count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, big;
	scanf("%d", &t);
	for (i = 0; i < 8; i++)
	{
		count[t % 10] += 1;
		t /= 10;
	}
	count[6] += count[9] + 1;
	count[6] /= 2;
	count[9] = count[6];
	big = 0;
	for (i = 0; i < 10; i++)
	{
		if (big < count[i])
		{
			big = count[i];
		}
	}
	printf("%d", big);
	return 0;
}

#include<stdio.h>

int main()
{
	int x, y = 0;
	char a[100];
	char b[100];
	scanf("%d", &x);
	scanf("%s %s", &a, &b);
	for(int i = 0; a[i]; i++)
	{
		for(int j = 0; b[j]; j++)
		{
			if(a[i] == a[j])
			{
				y++;
			}
		}
	}
	if(y > x)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

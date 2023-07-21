#include<stdio.h>

int main()
{
	char a[100], b[100];
	int x = 0, y = 0;
	scanf("%s %s", &a, &b);
	for(int i = 0; a[i]; i++)
	{
		if(a[i] == '6')
		{
			a[i] = '5';
		}
		if(b[i] == '6')
		{
			b[i] = '5';
		}
		x = x * 10 + a[i] - 48 + b[i] - 48;
	}
	for(int i = 0; b[i]; i++)
	{
		if(a[i] == '5')
		{
			a[i] = '6';
		}
		if(b[i] == '5')
		{
			b[i] = '6';
		}
		y = y * 10 + a[i] - 48 + b[i] - 48;
	}
	printf("%d %d", x, y);
	return 0;
}

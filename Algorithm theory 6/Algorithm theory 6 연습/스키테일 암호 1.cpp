#include<stdio.h>

int main()
{ 
	char a[100];
	char b[100];
	int x, y, count = 1;
	scanf("%d %d", &x, &y);
	scanf("%s", &a);
	b[0] = a[0];
	for(int i = 0; i < x; i++)
	{
		if(0 < i * y - count * x + 1)
		{
			b[i * y + 1 - count * x] = a[i];
			count = (i * y + 1) / x;
			continue;
		}
		b[i * y] = a[i];
	}
	for(int i = 0; i < x; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}

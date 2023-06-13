#include<stdio.h>

int main()
{
	int n, a, cnt;
	cnt = 0;
	scanf("%d", &n);
	while(n >= 10)
	{
		a = 0;
		while(n)
		{
			a = a + n % 10;
			n = n / 10;
		}
		n = a;
		cnt += 1;
	}
	printf("%d", cnt);
	return 0;
}

#include<stdio.h>

void A(int n, int a, int b)
{
	if (n == 0) return;
	A(n - 1, a, 6 - a - b);
	printf("%d %d %d\n", n, a, b);
	A(n - 1, 6 - a - b, b);
}

int main()
{
	int a;
	scanf("%d", &a);
	A(a, 1, 3);
	return 0;
}

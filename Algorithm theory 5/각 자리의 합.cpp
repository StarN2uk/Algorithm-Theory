#include<stdio.h>

int A(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return n % 10 + A(n / 10);
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", A(a));
	return 0;
}

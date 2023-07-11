#include<stdio.h>

int Factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Factorial(n));
	return 0;
}

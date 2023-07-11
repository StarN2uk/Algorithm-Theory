#include<stdio.h>

int A(int n)
{
	return (n - 2) * (n + 1) * n / 2;
}
int B(int n)
{
	return (n * n * n) - ((n - 1) * (n - 1) * (n - 1));
}
int C(int n)
{
	return (3 * n * n * n) - (n * n) - (3 * n);
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(b == 1)
	{
		printf("%d", A(a));
	}
	else if(b == 2)
	{
		printf("%d", B(a));
	}
	else if(b == 3)
	{
		printf("%d", C(a));
	}
	return 0;
}

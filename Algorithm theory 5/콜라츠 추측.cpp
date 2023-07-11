#include<stdio.h> 

int A(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n % 2 == 0)
	{
		return 1 + A(n / 2);
	}
	else if(n % 2 == 1)
	{
		return 1 + A(n * 3 + 1);
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", A(a));
	return 0;
}

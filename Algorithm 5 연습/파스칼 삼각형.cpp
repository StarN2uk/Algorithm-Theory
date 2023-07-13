#include<cstdio>

int A(int a, int b)
{
	if(a == 1 || b == 1 || a == b)
	{
		return 1;
	}
	return A(a - 1, b) + A(a - 1, b - 1);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", A(a, b));
	return 0;
}

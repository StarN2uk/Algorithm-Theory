#include<stdio.h>

int T[1000];

int A(int b, int c)
{
	if(c == 0)
	{
		return b;
	}
	return A(T[b - 1], c - 1);
}

int main()
{
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	for(i = 0; i < a; i++)
	{
		scanf("%d", &T[i]);
	}
	printf("%d", A(b, c));
	return 0;
} 

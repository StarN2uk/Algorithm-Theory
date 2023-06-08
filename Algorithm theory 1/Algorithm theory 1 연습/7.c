#include<stdio.h>

int main()
{
	int h, m;
	int a;
	scanf("%d%d%d", &h, &m, &a);
	m += a;
	h += m/60;
	m = m % 60;
	h = h % 24;
	printf("%d %d", h, m);
	return 0;
}

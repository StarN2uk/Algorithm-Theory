#include <stdio.h>

int main()
{
	int a, b, c, d, e, s;
	a, b, c, d, e = 0, 0, 0, 0, 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	s = (a * a + b * b + c * c + d * d + e * e) % 10;
	printf("%d", s);
	return 0;
}

#include<stdio.h>

int main()
{
	char c;
	int i;
	long long d;
	float l;
	char s[101];
	scanf("%c %d %lld %f %s", &c, &i, &d, &l, &s);
	printf("%s %lld %.1f %d %c", s, d, l, i, c);
	return 0;
}

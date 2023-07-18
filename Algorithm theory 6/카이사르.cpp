#include<stdio.h>

int main()
{
	int a;
	char s[100];
	scanf("%d", &a);
	scanf("%s", &s);
	for(int i = 0; s[i]; i++)
	{
		s[i] = s[i] + a;
	}
	printf("%s", s);
	return 0;
}

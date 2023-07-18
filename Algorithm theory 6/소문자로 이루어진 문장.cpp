#include<stdio.h>

int main()
{
	char a[100];
	scanf("%[^\n]", &a);
	for(int i = 0; a[i]; i++)
	{
		if('A' <= a[i] && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
	}
	printf("%s", a);
	return 0;
}

#include<stdio.h>

int main()
{
	char count[26] = {0, };
	char a[100];
	char b[26];
	scanf("%s", &a);
	for(int i = 0; i <= 25; i++)
	{
		b[i] = -1;
	}
	for(int i = 0; a[i]; i++)
	{
		if('A' <= a[i] && a[i] <= 'Z')
		{
			if(count[a[i] - 'A'] >= 1)
			{
				continue;
			}
			b[a[i] - 'A'] = i;
			count[a[i] - 'A']++;
		}
		if('a' <= a[i] && a[i] <= 'z')
		{
			if(count[a[i] - 'a'] >= 1)
			{
				continue;
			}
			b[a[i] - 'a'] = i;
			count[a[i] - 'a']++;
		}
	}
	for(int i = 0; i <= 25; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}

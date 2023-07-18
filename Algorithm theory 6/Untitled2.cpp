#include<stdio.h>

int a[26];

int main()
{
	char S[100];
	scanf("%s", &S);
	for(int i = 0; S[i]; i++)
	{
		if('A' <= S[i] && S[i] <= 'Z')
		{
			S[i] = S[i] + 32;
		}
	}
	for(int i = 0; S[i]; i++)
	{
		a[S[i] - 'a']++;
	}
	for(int i = 0; i <= 25; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

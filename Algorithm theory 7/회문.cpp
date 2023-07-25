#include<stdio.h>
#include<string.h>

int A(char str[100])
{
	int check = 1, count = 0;
	int len = strlen(str);
	for(int i = 0; i < len/2; i++)
	{
		if(str[i] == str[len - 1 - i])
		{
			count++;
		}
		if(count >= len / 2)
		{
			check = 0;
		}
	}
	return check;
}

int main()
{
	char a[1000000] = {0, };
	int x, count = 0;
	scanf("%d", &x);
	for(int i = 0; i < x; i++)
	{
		scanf("%s", &a[i]);
	}
	for(int i = 0; i < x; i++)
	{
		count = count + A(a);
	}
	printf("%d", count);
	return 0;
}

#include<stdio.h>

int main()
{
	char a;
	char b[100000] = {0, };
	int x, count;
	scanf("%s", &a);
	scanf("%d", &x);
	for(int i = 0; i < x; i++)
	{
		scanf("%s", &b[i]);
	}
	for(int i = 0; i < x; i++)
	{
		if(b[i] == a)
		{
			printf("Yes");
		}
		if(b[i] != a)
		{
			count++;
		}
		if(count >= x)
		{
			printf("No");
		}
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int count = 0;
	char a[100];
	scanf("%[^\n]", &a);
	for(int i = 0; a[i]; i++)
	{
		
		count++;
	}
	for(int i = 0; a[i]; i++)
	{
		if(a[i] == 0)
		{
			a[i] = -1;
		}
	}
	printf("%s", a);
	return 0;
}

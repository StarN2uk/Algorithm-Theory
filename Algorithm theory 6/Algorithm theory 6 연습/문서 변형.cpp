#include<stdio.h>

int main()
{
    char a[100];
    char b[9] = "finearts";
	scanf("%s", &a);
	for(int i = 0; a[i]; i++)
	{
		if('A' <= a[i] && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
		int g = 0;
		for(int j = 0; b[j]; j++)
		{
			if(a[i] == b[j])
			{
				g++;
			}
		}
		if(g != 1)
		{
			printf("%c", a[i]);
		}
	}
	return 0;
}

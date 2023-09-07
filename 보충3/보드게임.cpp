#include<stdio.h>
using namespace std;

int last(int z, char a[50], int e)
{
	int c = 0;
	int d = 0;
	for(int i = 0; i < z; i++)
	{
		if(a[i] != '0')
		{
			c = a[i];
			d = i;
			break;
		}
		else if(a[i] == '0')
		{
			return last(z, a, e);
		}
	}
	if('a' <= c && c <= 'z')
	{
		c = 96 - c;
		e = c + d;
	}
	if('A' <= c && c <= 'Z')
	{
		c = c - 64;
		e = c + d;
	}
	if(a[c] == 0)
	{
		return e;
	}
	if(a[c] != 0)
	{
		return last(z, a, e);
	}
}

int main()
{
	char a[50] = {0, };
	int x, y, z, e;
	e = 0;
	char b;
	scanf("%d", &x);
	for(int i = 0; i < x; i++)
	{
		scanf("%d %c", &y, &b);
		a[y] = b;
	}
	scanf("%d", &z);
	printf("%d", last(z, a, e));
	return 0;
}

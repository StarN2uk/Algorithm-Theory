#include<stdio.h>

int a, s[10], b[10], G = 817324098, diff;

void A(int check, int so, int bing, int c)
{
	if(check == a)
	{
		if(so > bing)
		{
			diff = so - bing;
		}
		else
		{
			diff = bing - so;
		}
		if(diff < G && c != a)
		{
			G = diff;
		}
		return;
	}
	A(check + 1, so * s[check], bing + b[check], c);
	A(check + 1, so, bing, c + 1);
}

int main()
{
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d %d", &s[i], &b[i]);
	}
	A(0, 1, 0, 0);
	printf("%d", G);
	return 0;
}

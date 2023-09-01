#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int b[100];
	int a, x;
	scanf("%d", &a);
	int c = 0, d = a - 1;
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	scanf("%d", &x);
	sort(b, b + a);
	while(c < d)
	{
		if(b[c] + b[d] == x)
		{
			printf("%d %d", b[c], b[d]);
			return 0;
		}
		else if(b[c] + b[d] < x)
		{
			c++;
		}
		else
		{
			d--;
		}
	}
	printf("-1");
	return 0;
}

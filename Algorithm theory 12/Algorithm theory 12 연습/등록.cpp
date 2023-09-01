#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int b[100];
	int a, x = 0;
	scanf("%d", &a);
	for(int i = 1; i <= a; i++)
	{
		scanf("%d", &b[i]);
	}
	sort(b + 1, b + a + 1);
	for(int i = 1; i <= a; i++)
	{
		x += b[i] * (a - i);
	}
	printf("%d", x);
	return 0;
}

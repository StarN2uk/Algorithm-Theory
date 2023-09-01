#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int b[100];
	int a, print = b[0], count = 1, max = 0;
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	sort(b, b + a);
	for(int i = 0; i < a - 1; i++)
	{
		if(b[i] == b[i + 1])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if(count > max)
		{
			max = count;
			print = b[i];
		}
	}
	printf("%d", print);
	return 0;
}

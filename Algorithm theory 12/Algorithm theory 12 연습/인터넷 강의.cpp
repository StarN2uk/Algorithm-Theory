#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	pair<int, int> b[100];
	int a, hour = 0, sum = 0;
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d %d", &b[i].second, &b[i].first);
	}
	sort(b, b + a);
	for(int i = 0; i < a; i++)
	{
		if(hour <= b[i].second)
		{
			hour = b[i].first;
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}

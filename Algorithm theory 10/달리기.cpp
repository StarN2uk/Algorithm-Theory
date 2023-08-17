#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> t[10000];
	int n, num, q;
	int a, b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		b = 5000 - b;
		t[i] = make_pair(a, b);
	}
	pair<int, int> first = make_pair(0, 0);
	for(int i = 0; i < n; i++)
	{
		if(first <= t[i])
		{
			first = t[i];
		}
	}
	for(int i = 0; i < n; i++)
	{
		num = num + first.first - t[i].first;
	}
	printf("%d", num + first.second);
}

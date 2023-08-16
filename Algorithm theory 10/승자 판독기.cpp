#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> t[10000];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		t[i] = make_pair(a, b);
	}
	pair<int, int> f;
	int num = 0;
	for(int i = 0; i < n; i++)
	{
		if(t[i].first > f.first)
		{
			f = t[i];
			num = i;
		}
		else if(t[i].first == f.first)
		{
			if(t[i].second > f.first)
			{
				f = t[i];
				num = i;
			}
		}
	}
	printf("%d", num + 1);
}

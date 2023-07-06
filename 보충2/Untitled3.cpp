#include<cstdio>
#include<vector>
using namespace std;

int main()
{
	vector<int> v[10000];
	int n, t, k, x, y, count = 0, a, b;
	scanf("%d", &n);
	scanf("%d %d", &t, &k);
	for(int i = 0; i < t; i++)
	{
		scanf("%d %d", &x, &y);
		v[x].push_back(y);
	}
	for(int i = 1; i <= k; i++)
	{
		scanf("%d %d", &a, &b);
		for(int j = 0; j < v[a].size();j++)
		{
			if(v[a][j] == b && !count)
			{
				count = i;
			}
		}
	}
	if(count)
	{
		printf("%d", count);
	}
	else
	{
		printf("-1");
	}
	return 0;
}

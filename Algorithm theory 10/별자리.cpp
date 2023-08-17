#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> t[1000];
	int n, g;
	scanf("%d %d", &n, &g);
	int sum = 0, plus = 0;
	for(int i = 0; i < n; i++)
	{
		int a, b; 
		scanf("%d %d", &a, &b);
		t[i] = make_pair(a, b);
	}
	for(int i = 1; i < g; i++)
	{
		int x1, x2, y1, y2, x, y;
		scanf("%d %d", &x, &y);
		x2 = t[i].first;
		y2 = t[i].second;
		x1 = t[i - 1].first;
		y1 = t[i - 1].second;
		plus = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		if(plus < 0)
		{
			plus = plus * -1;
		}
		sum = sum + plus;
	}
	printf("%d", sum);
	return 0; 
}

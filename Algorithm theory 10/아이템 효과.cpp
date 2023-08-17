#include<cstdio>
#include<utility>
using namespace std;

int main()
{
	pair<int, double> t[1000];
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		int a;
		double b;
		scanf("%d %lf", &a, &b);
		t[i] = make_pair(a, b);
	}
	int x, y;
	double z;
	scanf("%d %d %lf", &x, &y, &z);
	t[x] = make_pair(y, z);
	int ia = 0;
	double ib = 1;
	for(int i = 1; i <= n; i++)
	{
		ia = ia + t[i].first;
		ib = ib * t[i].second;
	}
	int v = ia * ib;
	printf("%d", v);
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	pair<int, int> a[100];
	int g[100];
	int b;
	cin >> b;
	for(int i = 0; i < b; i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	for(int i = 0; i < b; i++)
	{
		g[i] = a[i].first * a[i].second * a[i].second / 2;
	}
	sort(g, g+b);
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; i < b; i++)
		{
			if(g[b - i] == a[j].first * a[j].second * a[j].second / 2)
			{
				cout << a[j].first << a[j].second;
			}
		}
	}
	return 0;
}

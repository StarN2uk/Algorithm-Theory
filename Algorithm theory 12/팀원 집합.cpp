#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	pair<int, int> a[100];
	int c[100];
	int b;
	cin >> b;
	for(int i = 1; i <= b; i++)
	{
		cin>>a[i].first>>a[i].second;
	}
	for(int i = 1; i <= b; i++)
	{
		for(int j = 1; j <= b; j++)
		{
			if(a[j].first == i)
			{
				cout << a[j].second;
			}
		}
		cout<<"\n";
	}
	return 0;
}

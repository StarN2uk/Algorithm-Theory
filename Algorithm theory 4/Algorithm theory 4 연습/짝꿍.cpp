#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> v[1000];
	int a, b, from, to, i, j;
	scanf("%d %d", &a, &b);
	for(i = 0; i < b; i++)
	{
		scanf("%d %d", &from, &to);
		v[from].push_back(to);
	}
	for(i = 1; i <= a; i++)
	{
		for(j = 0; j < v[i].size(); j++)
		{
			printf("%d ", v[i][j]);
		}
		if (v[i].size() == 0)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}

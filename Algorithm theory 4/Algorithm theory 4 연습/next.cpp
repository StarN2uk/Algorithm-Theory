#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	vector<int> v[10000];
	int n, m, i, j, k, count, s, from, to;
	scanf("%d %d", &n, &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d %d", &from, &to);
		v[from].push_back(to);
	}
	for(i = 1; i <= n; i++)
	{
		count = 0;
		for(j = 0; j < v[i].size(); j++)
		{
			s = v[i][j];
			for(k = 0; k < v[s].size(); k++)
			{
				if (i == v[s][k])
				{
					printf("%d ", s);
					count++;
					break;
				}
			}
		}
		if(count == 0)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}

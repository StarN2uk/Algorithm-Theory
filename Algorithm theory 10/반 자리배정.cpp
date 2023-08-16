#include<stdio.h>
#include<utility>
using namespace std;

int main()
{
	pair<int, int> c[100][100];
	int a, b, x, y;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++)
	{
		for(int j = 1; j <= b; j++)
		{
			scanf("%d %d", &x, &y);
			c[i][j] = make_pair(x, y);
		}
	}
	int c1x, c1y, c2x, c2y;
	scanf("%d %d", &c1x, &c1y);
	scanf("%d %d", &c2x, &c2y);
	pair<int, int> abc = c[c1x][c1y];
	c[c1x][c1y] = c[c2x][c2y];
	c[c2x][c2y] = abc;
	for(int i = 1; i <= a; i++)
	{
		for(int j = 1; j <= b; j++)
		{
			printf("%d %d ", c[i][j].first, c[i][j].second);
		}
		printf("\n");
	}
	return 0;
}

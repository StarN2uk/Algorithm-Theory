#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	int a, b;
	queue<int> q;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++)
	{
		q.push(i);
	}
	while(!q.empty())
	{
		for(int i = 0; i < b - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d ", q.front());
		q.pop();
	}
	return 0;
}

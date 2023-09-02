#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	stack<int> s;
	queue<int> q;
	for(int i = 0; i < 10; i++)
	{
		int t;
		scanf("%d", &t);
		s.push(t);
		q.push(t);
	}
	while(!s.empty())
	{
		printf("%d ", s.top());
		s.pop();
	}
	printf("\n");
	while(!q.empty())
	{
		printf("%d ", q.front());
		q.pop();
	}
	return 0;
}

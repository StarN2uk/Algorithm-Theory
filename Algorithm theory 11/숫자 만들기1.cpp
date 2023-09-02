#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	queue<int> q;
	q.push(a);
	while(!q.empty())
	{
		c = q.front();
		q.pop();
		if(c = b)
		{
			printf("1");
			return 0;
		}
		if(c * 2 <= b)
		{
			q.push(c * 2);
		}
		if(c * 10 + 1 <= b)
		{
			q.push(c * 10 + 1);
		}
	}
	printf("-1");
	return 0;
}

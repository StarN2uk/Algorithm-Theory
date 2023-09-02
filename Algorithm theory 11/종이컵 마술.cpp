#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	int a, size, num;
	stack<int> s;
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &size);
		while(!s.empty() && s.top() < size)
		{
			s.pop();
		}
		s.push(size);
	}
	num = s.size();
	printf("%d", num);
	return 0;
}

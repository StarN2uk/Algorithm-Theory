#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	int a, num = 0;
	char b[100];
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%s", b);
		stack<char> s;
		for(int j = 0; b[j]; j++)
		{
			if(s.empty())
			{
				s.push(b[j]);
			}
			else if(b[j] == s.top())
			{
				s.pop();
			}
			else
			{
				s.push(b[j]);
			}
		}
		if(s.empty())
		{
			num++;
		}
	}
	printf("%d", num);
	return 0;
}

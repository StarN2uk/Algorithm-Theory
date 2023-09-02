#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	char a[100];
	int sum, sum2;
	scanf("%s", a);
	stack<int> s;
	for(int i = 0; a[i]; i++)
	{
		if('0' <= a[i] && a[i] <= '9')
		{
			s.push(a[i] - '0');
		}
		else
		{
			sum = s.top();
			s.pop();
			sum2 = s.top();
			s.pop();
			if(a[i] == '+')
			{
				s.push(sum2 + sum);
			}
			else
			{
				s.push(sum2 - sum);
			}
		}
	}
	printf("%d", s.top());
	return 0;
}

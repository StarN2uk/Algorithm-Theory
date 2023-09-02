#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	char a[100];
	stack<char> s;
	scanf("%s", &a);
	for(int i = 0; a[i]; i++)
	{
		if(a[i] == '(' || a[i] == '{' || a[i] == '[')
		{
			s.push(a[i]);
		}
		else
		{
			if(s.empty())
			{
				printf("0");
				return 0;
			}
			else if(s.top() != '(' && a[i] == ')')
			{
				printf("0");
				return 0;
			}
			else if(s.top() != '{' && a[i] == '}')
			{
				printf("0");
				return 0;
			}
			else if (s.top() != '[' && a[i] == ']')
			{
				printf("0");
				return 0;
			}
			s.pop();
		}
	}
	if(s.empty())
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}

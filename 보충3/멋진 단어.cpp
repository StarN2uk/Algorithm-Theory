#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	char a[100];
	int count1 = 0, count2 = 0;
	stack<char> s;
	scanf("%s", &a);
	for(int i = 0; a[i]; i++)
	{
		s.push(a[i]);
		if(a[i] == 'A')
		{
			count1++;
			if(count2 >= 2)
			{
				s.pop();
				s.pop();
				count2 = 0;
			}
		}
		else if(a[i] == 'B') count2++;
		if(count1 >= 2)
		{
			s.pop();
			s.pop();
			count1 = 0;
		}
		if(count2 >= 2)
		{
			s.pop();
			s.pop();
			count2 = 0;
		}
	}
	if(count1 == 1 || count2 == 1)
	{
		printf("NO");
	}
	else if(count1 == 0 && count2 == 0)
	{
		printf("%d %d\n", count1, count2);
		printf("YES");
	}
	return 0;
}

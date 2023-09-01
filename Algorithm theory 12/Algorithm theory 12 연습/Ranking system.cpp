#include<iostream>
#include<algorithm>
using namespace std;

struct RPG
{
	int level;
	int ex;
	int power;
};

bool cmp(RPG left, RPG right)
{
	if(left.level > right.level)
	{
		return true;
	}
	else if(left.level == right.level)
	{
		if(left.ex > right.ex)
		{
			return true;
		}
		else if (left.ex == right.ex)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

int main()
{
	RPG c[100];
	int a;
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d %d %d", &c[i].level, &c[i].ex, &c[i].power);
	}
	sort(c, c + a, cmp);
	for(int i = 0; i < a; i++)
	{
		printf("%d %d %d\n", c[i].level, c[i].ex, c[i].power);
	}
	return 0;
}

#include<stdio.h>
using namespace std;
struct thing
{
	int anum, bnum, size, cost;
};
thing p[10000];
int a_p = 0;
char a[10000];
void Zero(int anum, int bnum, int size, int cost)
{
	p[a_p].anum = anum;
	p[a_p].bnum = bnum;
	p[a_p].size = size;
	p[a_p].cost = cost;
	a_p++;
}

void First(int anum, int num, int value)
{
	if(num == 0)
	{
		p[anum].anum = value;
	}
	if(num == 1)
	{
		p[anum].bnum = value;
	}
	if(num == 2)
	{
		p[anum].size = value;
	}
	if(num == 3)
	{
		p[anum].cost = value;
	}
}

void Second(int anum)
{
	for(int i = 0; i < a_p; i++)
	{
		if(anum == p[i].anum)
		{
			printf("%d %d %d %d", p[anum].anum, p[anum].bnum, p[anum].size, p[anum].cost);
		}
	}
}

int main()
{
	int n, a;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if(a == 0)
		{
			int anum, bnum, size, cost;
			scanf("%d %d %d %d", &anum, &bnum, &size, &cost);
			Zero(anum, bnum, size, cost);
		}
		else if(a == 1)
		{
			int anum, num, value;
			scanf("%d %d %d", &anum, &num, &value);
			First(anum, num, value);
		}
		else if(a == 2)
		{
			int anum;
			scanf("%d", &anum);
			Second(anum);
		}
	}
}

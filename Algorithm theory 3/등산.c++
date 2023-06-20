#include<stdio.h>
#include <vector>
using namespace std;

int main()
{
	int i, n, s, w, max = 0, number, count = 0;
	vector<int> v;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &s);
		v.push_back(s);
	}
	for(i = 1; i < n; i++)
	{
		w = v[i] - v[i - 1];
		if (w <= 0)
		{
			continue;
		}
		else if (w > 0)
		{
			if (max < w)
			{
				max = w;
				number = i;
				count++;
			}
			else
			{
				continue;
			}
		}
	}
	if (count == 0)
	{
		printf("%d", number);
	}
	else
	{
		printf("%d %d", number, number + 1);
	}
	return 0;
}

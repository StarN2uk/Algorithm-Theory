#include<stdio.h>
int n;
int p[100];
int ans;

void A(int index, int sum)
{
	if (index == n)
	{
		if(ans < sum)
		{
			ans = sum;
		}
		return;
	}
	int p_first = p[index];
	int p_second = p[index] * p[index] - 40 * p[index] + 300;
	A(index + 1, sum + p_first);
	A(index + 1, sum + p_second);
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	A(0, 0);
	printf("%d", ans);
	return 0;
}

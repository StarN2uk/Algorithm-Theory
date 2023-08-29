#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	float a[100], a2[100];
	int b,x = 0;
	scanf("%d", &b);
	for(int i = 0; i < b; i++)
	{
		cin >> a[i];
		cin >> a2[i];
	}
	sort(a, a+b);
	for(int i = 0; i < b; i++)
	{
		if(a[i] != a2[i])
		{
			x++;
		}
	}
	printf("%d", &x);
	return 0;
}

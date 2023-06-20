#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int a, i;
	vector<int> A;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		A.push_back(a);
	}
	for(i = A.size() - 1; i >= 0; i--)
	{
		printf("%d\n", A[i]);
	}
	return 0;
}

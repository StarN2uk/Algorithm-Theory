#include<stdio.h>
#include<iostream>
using namespace std;

int compare(string min, string other)
{
	for(int i = 0; i < 13; i++)
	{
		if(min[i] > other[i])
		{
			printf("sir");
			return 0;
		}
		else if(min[i] < other[i])
		{
			printf("kid");
			return 0;
		}
		else
		{
			min.erase(0, 1);
			other.erase(0, 1);
			return compare(min, other);
		}
	}
}

int main()
{
	string min ;
	string other;
	cin >> min;
	cin >> other;
	printf("%d", compare(min, other));
	return 0;
}

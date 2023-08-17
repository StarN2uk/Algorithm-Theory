#include<stdio.h>
#include <iostream>
using namespace std;

struct Point
{
	string name;
	int Y;
	int N;
};

int main()
{
	Point s[10000];
	int N, person;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		int Y, N;
		char b[10000];
		scanf("%s %d %d", &b, &Y, &N);
		s[i].name = b;
		s[i].Y = Y;
		s[i].N = N;
	}
	scanf("%d", &person);
	char a[10000];
	scanf("%s", &a);
	for(int j = 0; j < N; j++)
	{
		if(s[j].name == a)
		{
			printf("%d %d", s[j].Y, s[j].N);
		}
	}
	return 0;
}

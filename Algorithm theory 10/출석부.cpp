#include<stdio.h>
#include <iostream>
using namespace std;

struct Point
{
	int ID;
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
		int ID, Y, N;
		char b[10000];
		scanf("%d %s %d %d", &ID, &b, &Y, &N);
		s[i].ID = ID;
		s[i].name = b;
		s[i].Y = Y;
		s[i].N = N;
	}
	scanf("%d", &person);
	for(int i = 0; i < person; i++)
	{
		char a[10000];
		scanf("%s", &a);
		for(int j = 0; j < N; j++)
		{
			if(s[j].name == a)
			{
				printf("%d %d %d", s[j].ID, s[j].Y, s[j].N);
			}
			else
			{
				printf("-1");
			}
		}
	}
	return 0;
}

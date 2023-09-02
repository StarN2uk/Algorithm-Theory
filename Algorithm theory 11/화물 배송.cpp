#include<cstdio>
#include<stack>
#include<queue>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	string c;
	stack<int> s;
	queue<string> q;
	scanf("%d", &a);
	for(int i = 0; i < a; i++)
	{
		cin >> b;
		cin >> c;
		s.push(b);
		q.push(c); 
	}
	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	printf("\n"); 
	while(!q.empty())
	{
		cout << q.front();
		q.pop();
	}
	return 0;
}

#include<stdio.h>

int main(){
	long long s;int a;int b;int c;int d;
	scanf("%lld", &s);
	a = s % 10;
	b = (s % 100) / 10;
	c = (s % 1000) / 100;
	d = s / 1000;
	printf("%d", a + b + c + d);
	return 0;
}

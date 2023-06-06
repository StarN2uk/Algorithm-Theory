#include<stdio.h>

int main(){
	long long s;int S;int M;int H;int ps;int pm;int ph;
	scanf("%d %d %d", &H, &M, &S);
	scanf("%lld", &s);
	ps = s % 60;
	pm = (s % 3600) / 60;
	ph = s / 3600;
	if (S - ps < 0){
		pm += 1;
		S += 60;
	}
	if (M - pm < 0){
		ph += 1;
		M += 60;
	}
	if (H - ph < 0){
		H += 24;
	}
	printf("%d½Ã %dºÐ %dÃÊ", H - ph, M - pm, S - ps);
	return 0;
}

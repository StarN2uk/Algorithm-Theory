#include<stdio.h>

int main()
{
	int score, student, avg, sum, i;
	scanf("%d", &student);
	for (i = 0; i < student; i++)
	{
		scanf("%d", &score);
		sum += score;
	}
	avg = sum / student;
	if (avg >= 80)
	{
		printf("easy");
	}
	else if (avg >= 60)
	{
		printf("normal");
	}
	else if (avg < 60)
	{
		printf("hard");
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int student[30] = { 0, };
	int check[28];

	while (i < 28)
	{
		scanf("%d", &check[i]);
		i++;
	}
	i = 0;
	while (i < 28)
	{
		student[check[i] - 1] = 1;
		i++;
	}
	i = 0;
	while (i < 30)
	{
		if (student[i] == 0)
			printf("%d\n", i + 1);
		i++;
	}
}
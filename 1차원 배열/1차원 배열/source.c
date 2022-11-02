#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int student = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &student);

		int score[1000], sum = 0;
		double average = 0.00;

		for (int j = 0; j < student; j++) {
			scanf("%d", &score[j]);

			sum += score[j];
		}

		average = ((double)sum / student);

		int per = 0;

		for (int k = 0; k < student; k++) {
			if (score[k] > average) {
				per += 1;
			}
		}
		printf("%.3lf%%\n", (double)per * 100 / student);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a[100][100] = { 0 };
	int b = 0;
	int c, d = 0;

	scanf("%d", &b);

	for (int i = 0; i < b; i++) {
		scanf("%d %d", &c, &d);

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				a[c + i][d + j] = 1;
			}
		}
	}

	int sum = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (a[i][j] == 1) {
				sum += 1;
			}
		}
	}

	printf("%d", sum);

	return 0;
}
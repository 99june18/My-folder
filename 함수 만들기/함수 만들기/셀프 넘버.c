#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int self(int, int*);

int main() {
	int *a[10000] = { 0, };

	for (int i = 1; i < 10000; i++) {
		self(i, a);
	}

	for (int i = 0; i < 10000; i++) {
		if (a[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}

int self(int i, int *a[]) {

	int sum = i;

	while (1) {

		if (sum / 10 == 0) {
			sum = sum + sum;
		}
		else if (sum / 10 >= 1 || sum/10 <= 9) {
			sum = sum + (sum / 10) + (sum % 10);
		}
		else if (sum / 100 >= 1 || sum / 100 <= 9) {
			sum = sum + (sum / 100) + ((sum / 10) % 10) + (sum % 10);
		}
		else  if (sum / 1000 >= 1 || sum / 1000 <= 9) {
			sum = sum + (sum / 1000) + ((sum / 100)%10) + ((sum % 100) / 10) + (sum % 10);
		}
		else {
			break;
		}

		a[sum] = 1;
	}
}
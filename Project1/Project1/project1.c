#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[] = "joonas";
	char b;

	scanf("%c", &b);

	printf("%c", b);

	if (b == a) {
		printf("%c", a + '??!');
	}

	return 0;
}
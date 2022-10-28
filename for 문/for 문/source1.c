#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	int x,y,z;
	int i = 0;
	
	scanf("%d", &a);

	x = a;

	while (1) {
		y = x / 10;
		z = x % 10;
		
		x = z * 10 + ((y + z)%10);

		i++;

		if (x == a) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}
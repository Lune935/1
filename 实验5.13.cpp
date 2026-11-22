#include <stdio.h>

int main() {
	int i, b, s, g;

	for (i = 1; i <= 432; i++) {
		b = i / 100;
		s = i / 10 % 10;
		g = i % 100 % 10;
		if ((b == 1 || b == 2 || b == 3 || b == 4) && (s == 1 || s == 2 || s == 3 || s == 4) && (g == 1 || g == 2 || g == 3
		        || g == 4) && (b != s) && (b != g) && (s != g)) {
			printf("%d\n", i);
		}
	}
	return 0;
}

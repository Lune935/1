#include <stdio.h>

int main() {
	int g, m, x;
	for (g = 1; g <= 20; g++)
		for (m = 1; m <= 34; m++) {
			x = 100 - g - m;
			if ((x % 3 == 0) && (5 * g + 3 * m + x / 3 == 100)) {
				printf("¹«¼¦%d£¬Ä¸¼¦%d£¬Ð¡¼¦%d\n", g, m, x);
			}

		}
	return 0;
}

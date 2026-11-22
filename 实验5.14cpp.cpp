#include <stdio.h>

int main() {
	int x, y;
	for (x = 1; x <= 245; x++) {
		x++;
		y = 245 - x;
		if ((x % 14 == 0) && (y % 17 == 0)) {
			printf("¼×£º%d£¬ÒÒ£º%d", x, y);
		}
	}
	return 0;
}

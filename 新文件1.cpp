#include <stdio.h>
#include <math.h>

int main() {
	int k = 0, m = 200, n = 300;
	for (int i = m; i <= n; i++) {
		int j;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j > (int)sqrt(i)) {
			k++;
			printf("%-8d", i);

			if (k % 3 == 0)
				printf("\n");
		}
	}
	return 0;
}
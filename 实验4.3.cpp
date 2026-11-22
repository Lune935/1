#include <stdio.h>

int main() {
	int i = 1;
	while (i <= 9) {
		printf("%d*%d=%d ", i, i, i * i);
		if (i % 3 == 0) {
			printf("\n");
		}
		i++;
	}

	return 0;
}

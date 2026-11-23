#include <stdio.h>
int k = 0;
int i = 1;

int main() {
	for (i = 1; i <= 599; i++) {
		if ((i % 3 == 0) && ((i % 10 == 5) || (i / 10 == 5) || (i / 100 == 5) || (i % 100 == 5) || (i / 10 % 10 == 5))) {
			printf("%-5d", i);
			k++;

			if (k % 4 == 0)
				printf("\n");
		}
	}
	return 0;
}

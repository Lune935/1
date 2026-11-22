#include <stdio.h>

int main() {
	int x = 3;
	double y = 17.8;
	printf("%d\n", (int)(y + 4.6) % x);
	return 0;
}
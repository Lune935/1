#include <stdio.h>

int main() {
	int x = 3;
	double y = 17.8;
	int res = (int)(y + 4.6) % x;
	printf("%d\n", res);
	return 0;
}
#include <stdio.h>

int main() {
	char a, b, c;
	int x, y;
	printf("Please input ad£º\n");
	scanf("%c%c%c", &a, &b, &c);
	printf("%c,%2c\n", a, c);
	printf("Please input cd£º\n");
	scanf("%d,%2d", &x, &y);
	printf("c=%d, d=%d, c/d=%d\n", x, y, x / y);
	return 0;
}
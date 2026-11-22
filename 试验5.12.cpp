#include <stdio.h>

int main() {
	int x;
	printf("ÇëÊäÈë£º\n");
	scanf("%d", &x);
	printf("ÄæĞòÊä³öÎª£º");
	while (x != 0) {
		printf("%d", x % 8);
		x = x / 8;
	}
	return 0;
}

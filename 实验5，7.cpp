#include <stdio.h>

int main() {
	int m, n, a, b, c;
	printf("«Î ‰»Îm”În£∫");
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		a = i / 100;
		b = i / 10 % 10;
		c = i % 100 % 10;
		if (a * a * a + b * b * b + c * c * c == i) {
			printf("%d  ", i);
		}
	}
	return 0;
}

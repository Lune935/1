#include <stdio.h>

int main() {
	int a, b;
	double x;
	printf("«Î ‰»Î£∫");
	scanf("%d %d", &a, &b);
	x = 1.0 / (1.0 / a + 1.0 / b);
	printf("%.3lf\n", x);
	return 0;
}

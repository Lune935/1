#include <stdio.h>

int main() {
	double a;
	printf("Input£º\n");
	scanf("a=%lf", &a);
	printf("%.6f\n", a);
	printf("%.0lf\n", a);
	printf("%.2lf\n", a);
	printf("%.4lf\n", a);
	printf("1111111111\n");
	printf("%-6.2lf,%9.3lf\n", a, a);
	printf("%.6e\n", a);
	printf("%.1e\n", a);
	return 0;
}
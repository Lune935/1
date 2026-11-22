#include <stdio.h>

int main() {
	double a, b;
	printf("请输入购物金额：");
	scanf("%lf", &a);
	if (a >= 1000) {
		b = 0.9 * a;
	} else if (a < 1000 && a >= 500) {
		b = 0.95 * a;
	} else if (a < 500 && a >= 200) {
		b = 0.98 * a;
	} else {
		b = a;
	}
	printf("实际应付：%.2lf\n", b);
	return 0;
}

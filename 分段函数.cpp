#include <stdio.h>

int main() {
	double x, y;
	printf("请输入x：");
	scanf("%lf", &x);
	if (x < 0 && x != -3) {
		y = x * x + x - 6;
	} else if (x >= 0 && x < 10 && x != 2 && x != 3) {
		y = x * x - 5 * x + 6;
	} else {
		y = x * x - x - 1;
	}
	printf("计算结果为：%.2lf", y);
	return 0;
}
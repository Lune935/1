#include <stdio.h>

int main() {
	float a;
	int b;
	double c;
	printf("请输入商品总价和分期期数：");
	scanf("%f %d", &a, &b);
	c = a * (1 + 0.05 ) / b;
	printf("每月还款：%.2lf\n", c);
	return 0;
}

#include <stdio.h>

int main() {
	int x, a, b, c, d, y;
	printf("输入一个四位整数：");
	scanf("%d", &x);
	a = x / 1000;
	b = x / 100 % 10;
	c = x / 10 % 10;
	d = x % 10;
	y = a * b * c * d;
	printf("各位数字之积：%d", y);
	return 0;
}

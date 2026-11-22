#include <stdio.h>

int main() {
	int a, b, temp;
	printf("请输入a与b\n");
	scanf("%d %d", &a, &b);
	printf(" 交换前a=%d，b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("交换后a=%d，b=%d\n", a, b);
	return 0;
}
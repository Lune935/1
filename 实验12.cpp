#include <stdio.h>

int main() {
	int a, b;
	printf("Inpit：\n");
	scanf("%d%d", &a, &b);
	printf("a=%+d, b=%d\n", a, b);
	printf("1111111111\n");
	printf("%-5d,%5d\n", a, b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("a对应的进制转换：%o,%x\n", a, a);
	return 0;
}
#include <stdio.h>

int main() {
	char x;
	printf("Input：\n");
	scanf("%c", &x);
	printf("%c的ASCII码为%d\n", x, x);
	printf("字符串：%s\n", "program");
	printf("1111111111\n");
	printf("%-.3s,%6.4s\n", "program", "program");
	printf("转化为小写为：%c\n", x + 32);
	return 0;

}
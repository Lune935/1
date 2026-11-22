#include <stdio.h>

int main() {
	char c;
	int a;
	printf("请输入字符与行数：");
	scanf("%c %d", &c, &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}

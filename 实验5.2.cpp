#include <stdio.h>

int main() {
	int a;
	char c;
	printf("请输入字符与行数：");
	scanf("%c %d", &c, &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i ; j++) {
			printf(" ");
		}
		for (int k = 1; k <= a + 1 - i ; k++) {
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}

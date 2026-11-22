#include <stdio.h>

int main() {
	int a;
	char c;
	printf("请输入字符与行数：");
	scanf("%c %d", &c, &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a + 1 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			if (((i == 2) && (k == 2)) || ((i == 4) && ((k == 2) || (k == 3) || (k == 4) || (k == 5) || (k == 6)))) {
				printf(" ");
			} else {
				{
					printf("%c", c);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

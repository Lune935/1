#include <stdio.h>

int main() {
	int n, i = 1;
	printf("请输入数字：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			printf("%d是完数\n", i)  ;
		}
	}
	return 0;
}

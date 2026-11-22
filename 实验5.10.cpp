#include <stdio.h>

int main() {
	int n, i = 1, sum = 0;
	printf("请输入小朋友数：");
	scanf("%d", &n);
	for (i == 1; i <= n; i++) {
		sum += i;
	}
	printf("苹果总数：%d", sum);
	return 0;
}

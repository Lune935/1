#include <stdio.h>

int main() {
	int m, n, count = 0, sum = 0;
	printf("请输入：\n");
	scanf("%d %d", &m, &n);
	int i = m;
	while (i <= n) {
		if (i % 2 == 0) {
			count++;
			sum += i;
		}
		i++;
	}
	printf("偶数：%d个，总和：%d", count, sum);
	return 0;
}

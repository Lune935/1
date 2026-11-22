#include <stdio.h>

int main() {
	int m, n, a, i;
	printf("请输入两个数字：");
	scanf("%d %d", &m, & n);
	if (m > n) {
		a = n;
	} else {
		a = m;
	}
	for (i = a; i >= 1; i--) {
		if ((m % i == 0) && (n % i == 0))
			break;
	}
	printf("最大公约数为：%d", i);
	return 0;
}

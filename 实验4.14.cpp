#include <stdio.h>

int main() {
	int a, k = 0;
	printf("请输入数字：");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			k++;
		}
	}
	printf("6因数个数为：%d", k);
	return 0;
}

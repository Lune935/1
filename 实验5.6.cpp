#include <stdio.h>

int main() {
	int x, max;
	printf("请输入数字，以0结束：\n");
	scanf("%d", &x);
	max = x;
	while (x != 0) {
		if (x > max) {
			max = x;
		}
		scanf("%d", &x);
	}
	printf("最大值为：%d", max) ;
	return 0;
}

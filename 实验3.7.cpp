#include <stdio.h>

int main() {
	int a, b;
	printf("请输入年月：");
	scanf("%d %d", &a, &b);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
		if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
			printf("%d年%d月31天\n", a, b);
		} else if (b == 2) {
			printf("%d年2月29天\n", a);
		} else if (b == 4 || b == 6 || b == 9 || b == 11)	{
			printf("%d年%d月30天\n", a, b);
		} else {
			printf("无效月份\n");
		}
	} else {
		if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
			printf("%d年%d月31天\n", a, b);
		} else if (b == 2) {
			printf("%d年2月28天\n", a);
		} else if (b == 4 || b == 6 || b == 9 || b == 11)	{
			printf("%d年%d月30天\n", a, b);
		} else {
			printf("无效月份\n");
		}
	}
	return 0;
}

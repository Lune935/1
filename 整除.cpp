#include <stdio.h>

int main() {
	int x;
	printf("请输入数字：");
	scanf("%d", &x);
	if (x % 3 == 0 && x % 5 == 0) {
		printf("可以同时被3和5整除\n");
	} else if (x % 5 == 0) {
		printf("可以被5整除\n");
	}	else if (x % 3 == 0)	{
		printf("可以被3整除\n");
	} else {
		printf("不能被3或5整除");
	}
	return 0;
}
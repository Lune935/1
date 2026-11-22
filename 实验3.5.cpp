#include <stdio.h>

int main() {
	int a, b;
	printf("请输入语文和数学成绩：");
	scanf("%d %d", &a, &b);
	if (a < 60 && b < 60) {
		printf("有挂科\n语文%d挂了\n数学%d挂了\n", a, b);
	} else if (a < 60 && b >= 60) {
		printf("有挂科\n语文%d挂了\n");
	} else if (a >= 60 && b < 60) {
		printf("有挂科\n数学%d挂了\n");
	} else {
		printf("再接再励");
	}
	return 0;
}

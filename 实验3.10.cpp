#include <stdio.h>

int main() {
	double x, y;
	printf("请输入点的坐标(x，y) ：");
	scanf("%lf %lf", &x, &y);
	if (x == 0 && y == 0) {
		printf("原点\n");
	} else if (x == 0 && y != 0) {
		printf("在y轴上\n");
	} else if (x != 0 && y == 0) {
		printf("在x轴上\n");
	} else if (x > 0 && y > 0) {
		printf("第一象限\n");
	} else if (x > 0 && y < 0) {
		printf("第四象限\n");
	} else if (x < 0 && y > 0) {
		printf("第二象限\n");
	} else if (x < 0 && y < 0) {
		printf("第三象限\n");
	}
	return 0;
}


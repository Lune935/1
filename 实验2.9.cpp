#include <stdio.h>

int main() {
	double t, h, v;
	printf("请输入时间：");
	scanf("%lf", &t);
	h = 0.5 * 9.8 * t * t;
	v = 9.8 * t;
	printf("下落的高度：%.3lf m\n", h);
	printf("落地时速度：%.3lf m/s\n", v);

	return 0;
}

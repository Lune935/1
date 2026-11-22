#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, s;
	double area;
	printf("请输入三边：");
	scanf("%d %d %d", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("面积为：%.2lf", area);
	return 0;
}

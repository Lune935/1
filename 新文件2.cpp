#include <stdio.h>

int main() {
	int a, b, c;
	int total;
	double average;

	printf("请输入三门课成绩:");
	scanf("%d %d %d", &a, & b, & c);

	total = a + b + c;
	average = total / 3.0;

	printf("总成绩: %.2f,平均成绩：%.2f\n", (double)total, average);
	return 0;
}
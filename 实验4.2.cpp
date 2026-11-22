#include <stdio.h>

int main() {
	int a, b, c, d;
	printf("请输入两个区间：\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a == c && b == d) {
		printf("两区间完全相同\n");
	} else if ((a <= c && b >= d) || (c <= a && d >= b)) {
		printf("两区间包含关系\n");
	} else if ((b < c) || (a > d)) {
		printf("两区间完全分离\n");
	} else {
		printf("两区间部分重叠\n");
	}
	return 0;
}

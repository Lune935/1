#include <stdio.h>

int main() {
	int a, b, c;
	printf("请输入三边：");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a) {
		if ((a * a + b * b == c * c) || ( a * a + c * c == b * b) || (b * b + c * c == a * a)) {
			printf("直角三角形\n");
		} else if (a == b && b == c) {
			printf("等边三角形\n");
		} else if ((a == b) || (b == c) || (a == c)) {
			printf("等腰三角形\n");
		} else {
			printf("普通三角形\n");
		}
	} else {
		printf("不能构成三角形\n");
	}
	return 0;
}

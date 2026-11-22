#include <stdio.h>

int main() {
	int a, b, c;
	printf("请输入入场、出场时间：\n");
	scanf("%d %d", &a, &b);
	printf("请选择是否会员：1是，0否\n");
	scanf("%d", &c);
	int time;
	if (a <= b) {
		time = b - a;
	} else {
		time = 24 - a + b;
	}
	if (time == 0) {
		time = 1;
	}
	double fee = 0.0;
	if (time <= 1) {
		fee = 10;
	} else {
		fee = 10 + (time - 1) * 5;
	}
	if (a > b || (a < 22 && b >= 22) || (a < 8 && b > 8)) {
		fee += 20.0;
	}
	if (fee > 50) {
		fee = 50;
	}

	if (c == 1) {
		fee = fee * 0.8;
	}

	printf("需缴停车费：%.2lf\n", fee);
	return 0;




}

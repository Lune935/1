#include <stdio.h>

int main() {
	double money;
	int type, month;
	printf("请输入存款金额、存款类型和存款期限：");
	scanf("%lf %d %d", &money, &type, &month);
	if (type == 1) {
		money += money * 0.003;
		printf("%.2lf\n", money);
	} else if (type == 2) {
		if (month == 6) {
			money += 0.0155 * money;
		} else if (month == 3) {
			money += money * 0.0135;
		} else if (month == 12) {
			money += money * 0.0175;
		} else if (month == 36) {
			money += money * 0.0275;
		} else if (month == 60) {
			money += money * 0.03;
		}
		printf("%.2lf\n", money);
	} else {
		printf("错误的存款类型！");
	}
	return 0;
}

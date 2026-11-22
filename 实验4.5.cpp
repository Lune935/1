#include <stdio.h>

int main() {
	int num, count = 0, sum = 0;
	double avg = 0.0;
	printf("请输入：\n");
	while (scanf("%d", &num) == 1 && num != -1) {
		if (num % 2 != 0) {
			count++;
			sum += num;
		}
		if ("count!=0") {
			avg = (double)sum / count;
		}
	}
	printf("平均值：%.6lf", avg);

	return 0;
}


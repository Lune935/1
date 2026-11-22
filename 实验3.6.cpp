#include <stdio.h>

int main() {
	int s;
	printf("请输入距离：");
	scanf("%d", &s);
	if ((s / 1.2) < (s / 3.0 + 27 + 23))
		printf("建议步行\n");
	else if ((s / 1.2) == (s / 3.0 + 27 + 23)) {
		printf("骑车步行时间相同\n");
	} else {
		printf("建议骑车");
	}
	return 0;
}

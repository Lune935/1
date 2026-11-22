#include <stdio.h>

int main() {
	int a, b;
	printf("请输入违章代码和违章次数：");
	scanf("%d %d", &a, &b);
	if (a == 101) {
		printf("扣6分，罚200元\n");
	} else if (a == 102) {
		printf("扣12分，罚2000元，吊销驾照\n");
	} else if (a == 103) {
		printf("扣12分，罚5000元，吊销驾照\n");
	} else if (a == 201) {
		printf("扣0分，罚200元\n");
	} else if (a == 202) {
		printf("扣1分，罚50元\n");
	} else if (a == 203) {
		printf("扣2分，罚100元\n");
	} else {
		printf(" 无效违章代码") ;
	}
	return 0;
}

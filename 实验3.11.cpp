#include <stdio.h>

int main() {
	double A1, B1, C1, A2, B2, C2;
	printf("请输入A1、B1、C1、A2、B2、C2：\n");
	scanf("%lf %lf %lf %lf %lf %lf", &A1, &B1, &C1, &A2, &B2, &C2);
	if (A1 / A2 == B1 / B2 == C1 / C2) {
		printf("两直线重合\n");
	} else if (A1 / A2 == B1 / B2 != C1 / C2) {
		printf("两直线平行\n");
	} else {
		printf("两直线相交\n");
	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
	double a1, q, n;
	double Sn;
	printf("请输入首项、公比和项数：");
	scanf("%lf %lf %lf", &a1, &q, &n);
	Sn = a1 * (1 - pow(q, n)) / (1 - q);
	printf("前5项和：%.2lf", Sn) ;
	return 0;
}

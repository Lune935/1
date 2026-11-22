#include <stdio.h>
#include <math.h>

int main() {
	int m, n, i, j, k = 0;
	printf("请输入m与n的值：");
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		for (j = 2; j <  sqrt(i); j++) {
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i)) {
			k++;
			printf("%-8d", i);
			if (k % 3 == 0)
				printf("\n");
		}
	}
	return 0;
}




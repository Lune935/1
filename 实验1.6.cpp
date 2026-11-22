#include <stdio.h>

int main() {
	int F;
	double C;
	printf("ÇëÊäÈë£º");
	scanf("%d", &F);
	C = 5.0 / 9 * (F - 32);
	printf("ÉãÊÏÎÂ¶È£º%.1lf\n", C);
	printf("Êª¶È£º24.6%%\n");
	return 0;
}
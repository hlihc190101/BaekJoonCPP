#include <stdio.h>

int main() {
	int i, n, max = 0, val[1001];
	double sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &val[i]);
		if (val[i] > max)
			max = val[i];
	}
	for (i = 0; i < n; ++i) {
		sum += (((double)val[i] / max) * 100);
	}
	printf("%f\n", sum / n);
}
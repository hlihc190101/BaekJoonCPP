#include <stdio.h>

int main() {
	int T, n, num[1001], sum = 0, cnt = 0;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &num[i]);
			sum += num[i];
		}
		for (int i = 0; i < n; ++i) {
			if (num[i] > ((double)sum / n))
				cnt++;
		}
		printf("%.3f%%\n", ((double)cnt / n) * 100);
		sum = 0;
		cnt = 0;
	}
}
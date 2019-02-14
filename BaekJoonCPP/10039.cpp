#include <stdio.h>

int main() {
	int num[5], sum = 0;

	for (int i = 0; i < 5; ++i) {
		scanf("%d", &num[i]);
		if (num[i] < 40)
			num[i] = 40;
		sum += num[i];
	}
	printf("%d\n", sum / 5);
}
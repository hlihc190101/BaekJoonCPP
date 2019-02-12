#include <stdio.h>

int main() {
	int a, x, tmp, result[10001], cnt = 0;
	scanf("%d %d", &a, &x);
	for (int i = 0; i < a; i++) {
		scanf("%d", &tmp);
		if (tmp < x) 
			result[cnt++] = tmp;
	}
	for (int i = 0; i < cnt; i++)
		printf("%d ", result[i]);
}
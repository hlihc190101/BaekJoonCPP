#include <stdio.h>

int main() {
	int N, a, b, res, tmp, cnt = 0;

	scanf("%d", &N);
	tmp = N;
	do {
		cnt++;
		a = N / 10;
		b = N % 10;
		res = a + b;
		N = (b * 10) + (res % 10);
	} while (N != tmp);
	printf("%d\n", cnt);
}
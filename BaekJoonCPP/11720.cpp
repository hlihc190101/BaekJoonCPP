#include <stdio.h>


int main() {
	int a, sum = 0;
	char b[101];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		b[i] = (getchar() - '0');
		sum += b[i];
	}
	printf("%d\n", sum);
}
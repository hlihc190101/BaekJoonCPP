#include <stdio.h>


int main() {
	int a, sum = 0;
	scanf("%d", &a);
	getchar();
	for (int i = 0; i < a; i++)
		sum += (getchar() - '0');
	printf("%d\n", sum);
}
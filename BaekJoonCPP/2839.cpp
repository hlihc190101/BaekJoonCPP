#include <stdio.h>

int main() {
	int N, j = 3, sum = -1;
	scanf("%d", &N);
	for (int i = 0; i <= N / 5; i++) 
		if ((N - i * 5) % 3 == 0) 
			sum = i + ((N - i * 5) / 3);
	printf("%d\n", sum);
}

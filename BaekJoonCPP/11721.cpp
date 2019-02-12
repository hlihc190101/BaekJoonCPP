#include <stdio.h>

int main() {
	char N[101];
	int cnt = 1;

	do {
		N[cnt] = getchar();
		cnt++;
	} while (N[cnt - 1] != '\n');

	for (int i = 1; i < cnt; ++i) {
		printf("%c", N[i]);
		if (i % 10 == 0)
			printf("\n");		
	}
}
#include <iostream>

int main() {
	char j;
	while (1) {
		j = getchar();
		if (j == EOF)
			break;
		putchar(j);
	}
}
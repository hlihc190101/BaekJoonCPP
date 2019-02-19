#include <stdio.h>

int main() {
	int T, num;
	char c[21];
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &num);
		scanf("%s", c);
		for (int i = 0; c[i] != NULL; ++i)
			for(int j = 0; j < num; ++j)
				printf("%c", c[i]);
		printf("\n");
	}
}
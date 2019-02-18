#include <stdio.h>

int main() {
	char s[101];
	int a[27];
	for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
		a[i] = -1;
	scanf("%s", &s);
	for (int i = 0; s[i] != NULL; i++) {
		if (a[(int)s[i] - 97] == -1)
			a[(int)s[i] - 97] = i;
	}
	for (int i = 0; i < (sizeof(a) / sizeof(int) - 1); i++)
		printf("%d ", a[i]);	
}
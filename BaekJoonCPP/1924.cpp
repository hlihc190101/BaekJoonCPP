#include <stdio.h>

int main() {
	char day[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x, y;
	scanf("%d %d", &x, &y);
	while (x != 1) {
		if (x == 3)
			y += 28;
		else if (x == 5 || x == 7 || x == 10 || x == 12)
			y += 30;
		else
			y += 31;
		x--;
	}

	printf("%s\n", day[y % 7]);
}
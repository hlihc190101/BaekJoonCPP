#include <iostream>
using namespace std;

int check[10001], cnt = 0;
int hanNumber(int n) {
	if (n < 100)
		return n;
	else if (n >= 100 && n < 1000) {
		if ((n / 100) == (n - ((n / 100) * 100)) % 10)
	}
}

int main() {
	int N;
	scanf("%d", &N);	
	for (int i = 0; i < N; ++i) {
		check[hanNumber(i)] = 1;
		if (!check[i])
			cnt++;
	}
}
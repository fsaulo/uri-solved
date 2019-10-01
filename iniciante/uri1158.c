#include <stdio.h>

int main (char *argc, int argv) {
	int n, i;
	int X, Y;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &X, &Y);
		int j;
		int sum = 0;
		int diff = Y;
		while (diff > 0) {
			if (X % 2) {
				sum += X;
				diff--;
			}
			X++;
		}
		printf("%d\n", sum);
	}
	return 0;
}

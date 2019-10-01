#include <stdio.h>
#include <stdlib.h>

int main() {
	double X;
	int *N = (int *) malloc(sizeof(int) * 100);
	int index = 100;
	scanf("%lf", &X);
	while (index) {
		printf("N[%d] = %.4f\n", 100-index, X);
		X = (double) X/2;
		--index;
	}
}


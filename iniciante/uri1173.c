#include <stdio.h>
#include <stdlib.h>

int main () {
	int *N = (int *) malloc(sizeof(int) * 10);
	int i, X;
	scanf("%d", &X);
	printf("N[0] = %d\n", N[0] = X);
	for (i = 1; i < 10; i++) 
		printf("N[%d] = %d\n", i, N[i] = N[i-1] * 2);
	return 0;
}
	

#include <stdio.h>

int main() {
	float A[100];
	int index = 100;
	while (index) {
		scanf("%f", &A[100-index]);
		--index;
	}
	
	int i;
	for (i = 0; i < 100; i++) {
		if (A[i] <= 10) 
			printf("A[%d] = %.1f\n", i, A[i]);
		else continue;
	}
	return 0;
}

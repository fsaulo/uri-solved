#include <stdio.h>
#include <stdlib.h>

int main () {
	int *N = (int *) malloc(sizeof(int) * 20);
	int index = 20;
	while (index) {
		scanf("%d", &N[index-1]);
		--index;
	}

	int i;
	for (i = 0; i < 20; ++i)
		printf("N[%d] = %d\n", i, N[i]);
}

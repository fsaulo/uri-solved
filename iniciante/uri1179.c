#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, i, pc = 0, ic = 0, index = 15;
	int *par = (int *) malloc(sizeof(int) * 5);
	int *impar = (int *) malloc(sizeof(int) * 5);

	while (index) {
		if (pc == 5) {
			for (i = 0; i < 5; ++i)
				printf("par[%d] = %d\n", i, par[i]);
			*par = 0x00;
			pc = 0;

		} else if (ic == 5) {
			for (i = 0; i < 5; ++i) 
				printf("impar[%d] = %d\n", i, impar[i]);
			*impar = 0x00;
			ic = 0;
		}

		scanf("%d", &x);

		if (x % 2 == 0) {
			par[pc] = x;
			pc++;

		} else if (x % 2) {
			impar[ic] = x;
			ic++;
		} 
		--index;
	}

	for (i = 0; i < ic; i++)
		printf("impar[%d] = %d\n", i, impar[i]);

	for (i = 0; i < pc; i++)
		printf("par[%d] = %d\n", i, par[i]);

	free(par);
	free(impar);
}
			

	


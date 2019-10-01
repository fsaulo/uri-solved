#include <stdio.h>

int main (int argc, char *argv) {

	int i, j, L;
	char T[2];
	double result = 0, soma = 0;
	double M[12][12];

	scanf("%s", &T);

	for (i = 0; i < 12; i++)
		for (j = 0; j < 12; j++)
			scanf("%lf ", &M[i][j]);

	int diag = 11, count = 0, index = 1;
	while (index < 12) {
		for (i = diag; i < 12; i++) {
			soma = soma + M[index][i];
			++count;
		}
		++index; --diag;
	}

	if (T[0] == 'S')
		result = soma;
	else if (T[0] == 'M')
		result = (double) soma/count;

	printf("%.1lf\n", result);

	return 0;
}

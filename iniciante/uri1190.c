#include <stdio.h>

int main () {
	double M[12][12];
	double soma = 0.0;
	int i, j, count = 0, ini = 11, fim = 1;
	char T[2];

	scanf("%s", T);
	for (i = 0; i < 12; i++)
		for (j = 0; j < 12; j++)
			scanf("%lf", &M[i][j]);

	for (i = 1; i < 6; i++) {
		for (j = ini; j < 12; j++) {
			soma = soma + M[i][j];
			count++;
		}
		ini--;
	}

	for (i = 6; i < 11; i++) {
		for (j = ini+1; j < 12; j++) {
			soma = soma + M[i][j];
			count++;
		}
		ini++;
	}

	if (T[0] == 'S')
		printf("%.1lf\n", soma);

	else if (T[0] == 'M')
		printf("%.1lf\n", (double) soma/count);

	return 0;
}

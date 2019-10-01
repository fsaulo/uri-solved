#include <stdio.h>

int main () {
	double M[12][12];
	int i, j, count = 0;
	double soma = 0.0;
	char T[2];

	scanf("%s", T);
	for (i = 0; i < 12; i++)
		for (j = 0; j < 12; j++)
			scanf("%lf", &M[i][j]);

	for (i = 0; i < 5; i++) {
		for (j = i+1; j < 11-i; j++) {
			soma = soma + M[i][j];
			count++;
		}
	}

	if (T[0] == 'S')
		printf("%.1lf\n", soma);

	else if (T[0] == 'M')
		printf("%.1lf\n", (double) soma/count);

	return 0;
}

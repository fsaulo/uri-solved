#include <stdio.h>

int main (int argc, char *argv) {

	int i, j, L;
	char T[2];
	double result = 0, soma = 0;
	double M[12][12];

	scanf("%d", &L);
	scanf("%s", &T);

	for (i = 0; i < 12; i++)
		for (j = 0; j < 12; j++)
			scanf("%lf ", &M[i][j]);

	for (i = 0; i < 12; i++)
		soma = soma + M[i][L];

	if (T[0] == 'S')
		result = soma;

	else if (T[0] == 'M')
		result = soma/12.0;

	printf("%.1lf\n", result);

	return 0;
}

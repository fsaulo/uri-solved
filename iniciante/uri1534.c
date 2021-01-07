#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	int j, i;
	int **M;
	while(scanf("%d", &N) != EOF) {
		M = malloc( N * sizeof(int *) );
		for (i = 0; i < N; ++i)
			M[i] = malloc( N * sizeof(int *));

		for (i = 0; i < N; ++i) {
			for (j = 0; j < N; ++j) {
				if (N % 2 != 0) {
					if (i == (int) ( N / 2.0 ) && j == (int) ( N / 2.0  )) {
						M[i][j] = 2;
					} else {
						if (i == j) M[i][j] = 1;
						else if ((i + j ) == (N - 1)) M[i][j] = 2;
						else M[i][j] = 3;
					}
				} else {
					if (i == j) M[i][j] = 1;
					else if ((i + j) == (N - 1)) M[i][j] = 2;
					else M[i][j] = 3;
				}
			}
		}
		
		for (i = 0; i < N; ++i) {
			for (j = 0; j < N; ++j)
				printf("%d", M[i][j]);
			printf("\n");
		}
	}
}

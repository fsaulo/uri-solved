#include <stdio.h>

int main ()
{
	int i, j, N;
	int lin = 0, col = 0, cc = 1;
	scanf("%d", &N);

	while (N) {
		int M[N][N];
		int fim = N;

		for (i = lin; i < N; ++i) {
			for (j = col; j < fim; ++j) {
				M[i][j] = cc;
				M[j][i] = cc;
				cc++;
			}
			col++; fim--;
			cc = 1;
		}
		cc = 1;
		for (i = N-1; i > fim; --i) {
			for (j = col-1; j > fim; --j) {
				M[i][j] = cc;
				M[j][i] = cc;
				cc++;
			}
			col--; cc =1; fim++;
		}

		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				if (j == N-1) {
					printf("%3d\n", M[i][j]);
				} else
					printf("%3d ", M[i][j]);
			}
		}

		printf("\n");
		scanf("%d", &N);
		lin = 0; col = 0; fim = N; cc = 1;
	}
	return 0;
}

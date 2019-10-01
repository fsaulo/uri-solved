#include <stdio.h>
#include <math.h>

/**
 * estimates when population PA will
 * overcome population PB given its
 * population growth GA > GB
 * @author: fsaulo
 */

int main (int argc, char *argv) {
	int N;
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		int PA, PB;
		double GA, GB;
		scanf("%d%d%lf%lf", &PA, &PB, &GA, &GB);
		if (PA > PB) {
			printf("0 anos\n");
			continue;
		} else if (GB >= GA) {
			printf("Mais de 1 seculo.\n");
			continue;
		} else {
			double time = (-1) * (log(PA)-log(PB))/(0.01 * (GA - GB));
			int time_yrs = (int) (ceil(time) + 1.0);
			if (time_yrs > 100 || time_yrs < 0) {
				printf("Mais de 1 seculo.\n");
				continue;
			}
			printf("%d anos.\n", time_yrs);
		}
	}
	return 0;
}

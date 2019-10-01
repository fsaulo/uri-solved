#include <stdio.h>

int main (int argv, char *argc) {
	int A;
	while (scanf("%d", &A) != 0) {
		if (A) {
			int i;
			int sum = 0;
			for (i = 0; i < 5; i++) {
				if (!(A%2))
					sum += A;
				else 
					--i;
				++A;
			}
			printf("%d\n", sum);
		} else
			break;
	}
	return 0;		}                                                                                        

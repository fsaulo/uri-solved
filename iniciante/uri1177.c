#include <stdio.h>

int main() {
	int i, T;
	scanf("%d", &T);
	int index = T;
	for (i = 0; i < 1000; i++) {
		if (index >= T)
			index = 0;
		printf("N[%d] = %d\n", i, index);
		++index;
	}

}

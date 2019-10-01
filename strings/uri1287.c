#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int process(char word[])
{
	int i;
	long int d = 0;
	int len = strlen(word);
	int index = 1;

	if (word[0] == '\0')
		return -1;
	else {
		for (i = 0; word[i] != '\0'; i++) {
			if (word[i] == 'o' || word[i] == 'O') {
				d = (d) * 10;
			} else if (word[i] == 'l') {
				d = (d) * 10 + '1' - '0';
			} else if (isdigit(word[i])) {
				d = (d) * 10 + word[i] - '0';
			} else if (word[i] == ' ' || word[i] == ',') {
				index++;
			} else if (isalpha(word[i]) || isxdigit(word[i]) || ispunct(word[i])) {
				return -1;
			}
		}
	}
	if (index >= len || d > INT_MAX)
		d = -1;
	return d;
}

int main()
{
    char word[100];
    long int d;

	// better alternative then using while(gets(buffer))
	while (fgets(word, sizeof(word), stdin) != 0) {
		d = process(word);
		if (d < 0)
			printf("error\n");
		else
			printf("%d\n", d);
	}
    return 0;
}

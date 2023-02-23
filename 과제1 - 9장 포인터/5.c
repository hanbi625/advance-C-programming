#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str[1001] = { 0 }, *i, *j, *p, mark;
	char *st, *end;

	for (i = str;; i++) {
		scanf("%c", i);
		if (*i == '?' || *i == '!' || *i == '.')
			break;
	}
	mark = *i;
	end = i - 1;
	for (j = i - 1; j >= str; j--) {
		if (*j == ' ') {
			st = j + 1;
			for (p = st; p <= end; p++)
				printf("%c", *p);
			printf(" ");
			end = j - 1;
		}
	}
	for (p = str; p <= end; p++)
		printf("%c", *p);
	printf("%c", mark);

	return 0;
}

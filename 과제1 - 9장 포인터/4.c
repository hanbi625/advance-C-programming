#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int a[11], b[11], n = 0, m = 0;
	int* i, * j, tmp;

	for (i = a;; i++) {
		scanf("%d", i);
		if (*i == 0)
			break;
		n++;
	}
	for (i = b;; i++) {
		scanf("%d", i);
		if (*i == 0)
			break;
		m++;
	}
	for (i = a; i < a + n; i++)
		for (j = b; j < b + m; j++)
			if (*i < *j) {
				tmp = *i;
				*i = *j;
				*j = tmp;
			}

	for (i = a; i < a + n - 1; i++) {
		for (j = a; j < a + n - 1; j++)
			if (*j < *(j + 1)) {
				tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
	}
	for (i = b; i < b + m - 1; i++) {
		for (j = b; j < b + m - 1; j++)
			if (*j > *(j + 1)) {
				tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
	}

	
	for (i = a; i < a + n; i++)
		printf("%d ", *i);
	printf("\n");
	for (i = b; i < b + m; i++)
		printf("%d ", *i);

	return 0;
}

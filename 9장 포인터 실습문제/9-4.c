#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int x[3];
	int* p, * q;

	for (p = x; p < x + 3; p++)
		scanf("%d", p);
	for (p = x; p < x + 2; p++) {
		for (q = x; q < x + 2; q++)
			if (*q > *(q + 1)) {
				int temp = *q;
				*q = *(q + 1);
				*(q + 1) = temp;
			}
	}
	printf("%d", *(x + 1));

	return 0;
}

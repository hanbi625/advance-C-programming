#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int N;
	char x[100], y[100], * p, * q, * r;

	scanf("%d", &N);
	getchar();
	for (p = x; p < x + N; p++)
		scanf("%c", p);
	r = y;
	for (p = x; p < x + N; p++) {
		int flag = 0;
		for (q = x; q < p; q++) {
			if (*p == *q) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			*r = *p;
			r++;
		}
	}
	for (p = y; p < r; p++)
		printf("%c", *p);

	return 0;
}

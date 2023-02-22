#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void addArray(int* x, int* y, int* z, int N);
int main() {
	int x[20], y[20], z[20];
	int* p, N;

	scanf("%d", &N);
	for (p = x; p < x + N; p++)
		scanf("%d", p);
	for (p = y; p < y + N; p++)
		scanf("%d", p);
	addArray(x, y, z, N);
	for (p = z; p < z + N; p++)
		printf(" %d", *p);

	return 0;
}
void addArray(int* x, int* y, int* z, int N) {
	int* p, * q, * r;
	r = z;
	for (p = x, q = y + N - 1; p < x + N; p++, q--, r++)
		*r = *p + *q;
}

#pragma warning(disable:4996)
#include <stdio.h>
void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main() {
	int N;
	int x[100], *p;
	int a, b;

	scanf("%d", &N);

	for (p = x; p < x + N; p++)
		scanf("%d", p);
	scanf("%d %d", &a, &b);

	swap(x + a, x + b);
	for (p = x; p < x + N; p++)
		printf(" %d", *p);

	return 0;
}

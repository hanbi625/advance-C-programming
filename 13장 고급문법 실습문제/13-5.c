#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void pswap(int** ppx, int** ppy);
int main() {
	int x, y;
	int *px, *py;

	scanf("%d %d", &x, &y);
	px = &x;
	py = &y;
	pswap(&px, &py);
	printf("%d %d", *px, *py);

	return 0;
}
void pswap(int** ppx, int** ppy) {
	int *tmp = *ppx;
	*ppx = *ppy;
	*ppy = tmp;
}

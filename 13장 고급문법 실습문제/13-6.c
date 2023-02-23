#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ABC(int(*p)[20], int k1, int k2);
int main() {
	int arr[20][20] = { 0 };
	int N, i, j;

	scanf("%d", &N);
	ABC(arr, N, N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf(" %d", *(*(arr + i) + j));
		printf("\n");
	}

	return 0;
}
void ABC(int(*p)[20], int k1, int k2) {
	int i, j;
	for (i = 0; i < k1; i++) {
		for (j = 0; j < k2; j++)
			*(*(p + i) + j) = i + j;
	}
}

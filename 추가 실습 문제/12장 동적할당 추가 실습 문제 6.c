#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int **p = NULL, *q = NULL;
	int N, i, sum = 0, n, j;

	scanf("%d", &N);
	p = (int**)malloc(N * sizeof(int*));
	if (p == NULL)
		return -1;
	q = (int*)malloc(N * sizeof(int));
	if (q == NULL)
		return -1;

	for (i = 0; i < N; i++) {
		scanf("%d", &q[i]);
		p[i] = (int*)malloc(q[i] * sizeof(int));
		if (p[i] == NULL)
			return -1;
		for (j = 0; j < q[i]; j++)
			scanf("%d", &p[i][j]);
	}
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < q[i]; j++) {
			printf("%d ", p[i][j]);
			sum += p[i][j];
		}
		printf("%d\n", sum);
	}

	for (i = 0; i < N; i++)
		free(p[i]);
	free(p);
	p = NULL;
	free(q);
	q = NULL;

	return 0;
}

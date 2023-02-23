#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int* p = NULL;
	int N, D, i;

	scanf("%d", &N);
	p = (int*)malloc(N * sizeof(int));
	if (p == NULL)
		return -1;

	for (i = 0; i < N; i++)
		scanf("%d", &p[i]);
	scanf("%d", &D);
	p = (int*)realloc(p, (N - D) * sizeof(int));
	if (p == NULL)
		return -1;
	for (i = 0; i < N - D; i++)
		printf("%d\n", p[i]);

	free(p);
	p = NULL;

	return 0;
}

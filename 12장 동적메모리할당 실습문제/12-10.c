#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, j, *p = NULL;

    scanf("%d", &N);
    p = (int*)malloc((N - 1) * sizeof(int));
    if (p == NULL)
        return -1;

    for (i = 0, j = 0; i < N - 1; i++) {
        if (j == N / 2)
            j++;
        p[i] = j;
        j++;
    }
    for (i = 0; i < N - 1; i++)
        printf(" %d", p[i]);

    free(p);
    return 0;
}
/*
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int* p = NULL, * q = NULL;
	int N, i, j;

	scanf("%d", &N);
	p = (int*)malloc(N * sizeof(int));
	if (p == NULL)
		return -1;
	q = (int*)malloc((N - 1) * sizeof(int));
	if (q == NULL)
		return -1;

	for (i = 0; i < N; i++)
		p[i] = i;
	for (i = 0, j = 0; i < N; i++) {
		if (i == N / 2)
			;
		else
			q[j++] = p[i];
	}
	for (i = 0; i < N - 1; i++)
		printf(" %d", q[i]);

	free(p);
	p = NULL;
	free(q);
	q = NULL;

	return 0;
}
*/

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int* p = NULL, * q = NULL;
	int N = 5, i, j;

	p = (int*)malloc(N * sizeof(int));
	if (p == NULL)
		return -1;

	for (i = 0;; i++) {
		scanf("%d", &p[i]);
		if (p[i] == -1)
			break;
		if (i + 1 == N) {
			N += 3;
			q = (int*)malloc(N * sizeof(int));
			if (q == NULL)
				return -1;
			for (j = 0; j < N - 3; j++)
				q[j] = p[j];
			free(p);
			p = q;
		}
	}
	for (j = 0; j <= i; j++)
		printf(" %d", p[j]);

	free(p);
	p = NULL;

	return 0;
}
/* 함수 사용한 코드
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void copy(int* N, int** p);
int main() {
    int N = 5, *p = NULL, *q = NULL;
    int i = 0, j;

    p = (int*)malloc(N * sizeof(int));
    if (p == NULL)
        return -1;
    while (1) {
        scanf("%d", &p[i]);
        if (p[i] == -1)
            break;
        if (i + 1 == N)
            copy(&N, &p);
        i++;
    }
    for (j = 0; j <= i; j++)
        printf(" %d", p[j]);

    free(p);

    return 0;
}
void copy(int* N, int** p) {
    int* q;
    int M;
    M = *N + 3;
    
    q = (int*)malloc(M * sizeof(int));

    for (int i = 0; i < *N; i++)
        q[i] = (*p)[i];
    free(*p);
    *p = q;
    *N = M;
}
*/

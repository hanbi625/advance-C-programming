#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, tmp;
    int* p = NULL;

    scanf("%d", &N);
    p = (int*)malloc(N * sizeof(int));

    if (p == NULL)
        return -1;

    for (i = 0; i < N; i++)
        scanf("%d", &p[i]);

    for (i = 0; i < N - 1; i++)
        if (p[i] > p[i + 1]) {
            tmp = p[i];
            p[i] = p[i + 1];
            p[i + 1] = tmp;
        }

    for (i = 0; i < N; i++)
        printf("%d\n", p[i]);

    if (p != NULL)
        free(p);

    return 0;
}

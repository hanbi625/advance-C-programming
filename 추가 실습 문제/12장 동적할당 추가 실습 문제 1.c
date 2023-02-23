#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, * p = NULL;
    int num = 0;

    scanf("%d", &N);
    p = (int*)malloc(N * sizeof(int));
    if (p == NULL)
        return -1;
    for (i = 0; i < N; i++)
        scanf("%d", &p[i]);
    for (i = 0; i < N; i++) {
        num *= 10;
        num += p[i];
    }
    printf("%d", num);
    free(p);
    p = NULL;

    return 0;
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int* p = NULL;
    int N, i, sum = 0;

    scanf("%d", &N);
    p = (int*)malloc(N * sizeof(int));

    if (p == NULL) 
        return -1;
    for (i = 0; i < N; i++) {
        scanf("%d", &p[i]);
        sum += p[i];
    }
    printf("%d", sum);
    free(p);
    return 0;
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i;
    float* p = NULL, max;

    scanf("%d", &N);
    p = (float*)malloc(N * sizeof(float));
    if (p == NULL)
        return -1;

    for (i = 0; i < N; i++)
        scanf("%f", &p[i]);
    max = p[0];
    for (i = 1; i < N; i++)
        if (max < p[i])
            max = p[i];
    printf("%.2f", max);

    if (p != NULL)
        free(p);


    return 0;
}

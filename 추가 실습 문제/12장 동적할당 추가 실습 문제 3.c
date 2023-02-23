#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
    char name[21];
    int a, b, c;
    double avg;
} st;
int main() {
    st* p = NULL, tmp;
    int N, i, j;

    scanf("%d", &N);
    getchar();
    p = (st*)malloc(N * sizeof(st));
    if (p == NULL)
        return -1;
    for (i = 0; i < N; i++) {
        scanf("%s %d %d %d", p[i].name, &p[i].a, &p[i].b, &p[i].c);
        p[i].avg = (p[i].a + p[i].b + p[i].c) / 3.0;
    }
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1; j++)
            if (p[j].avg < p[j + 1].avg) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
    for (i = 0; i < N; i++)
        printf("%s %d %d %d %.1f\n", p[i].name, p[i].a, p[i].b, p[i].c, p[i].avg);
    free(p);
    p = NULL;

    return 0;
}

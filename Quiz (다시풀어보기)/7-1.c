#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count(int N);
void decomp(int* p, int N, int M);
int comp(int* p, int M);
int main() {
    int N, M, * p = NULL;
    int num = 0;

    scanf("%d", &N);
    M = count(N);
    p = (int*)malloc(M * sizeof(int));
    if (p == NULL) return -1;
    decomp(p, N, M);
    num = comp(p, M);
    printf("%d", num);
    free(p);

    return 0;
}
int count(int N) {
    int cnt = 0;
    while (N) {
        cnt++;
        N /= 10;
    }
    return cnt;
}
void decomp(int* p, int N, int M) {
    int i;
    for (i = M - 1; i >= 0; i--) {
        p[i] = N % 10;
        N /= 10;
    }
}
int comp(int* p, int M) {
    int i, j, num = 0;

    for (i = 0; i < M; i++) {
        int flag = 0;
        for (j = 0; j < i; j++)
            if (p[i] == p[j]) flag = 1;
        if (flag == 0) num = num * 10 + p[i];
    }
    return num;
}

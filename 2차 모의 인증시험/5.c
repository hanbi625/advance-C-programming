#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check_row(int** p, int M, int N);
int check_col(int** p, int M, int N);
int main() {
    int **p = NULL, M, N, i = 0;
    int x, y, z;
    int cnt1 = 0, cnt2 = 0;

    scanf("%d %d", &M, &N);
    p = (int**)malloc(M * sizeof(int*));
    if (p == NULL)
        return -1;

    for (i = 0; i < M; i++) {
        p[i] = (int*)malloc(N * sizeof(int));
        if (p[i] == NULL)
            return -1;
        for (int j = 0; j < N; j++)
            p[i][j] = 0;
    }

    for (i = 0;; i++) {
        scanf("%d %d %d", &x, &y, &z);
        if (x == 0 && y == 0 && z == 0)
            break;
        p[x][y] = z;
    }
    cnt1 = check_row(p, M, N);
    cnt2 = check_col(p, M, N);

    for (i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d", p[i][j]);
        printf("\n");
    }
    if (cnt1 > cnt2)
        printf("%d", cnt1);
    else printf("%d", cnt2);
    for (i = 0; i < M; i++)
        free(p[i]);
    free(p);
    

    return 0;
}
int check_row(int** p, int M, int N) {
    int i, j, cnt = 0;
    int max;

    max = 0;
    for (i = 0; i < M; i++) {
        cnt = 0;
        for (j = 0; j < N; j++) {
            if (p[i][j] == 0)
                cnt++;
            else {
                if (max < cnt)
                    max = cnt;
                cnt = 0;
            }
        }
        if (max < cnt)
            max = cnt;
    }
    return max;
}
int check_col(int** p, int M, int N) {
    int i, j, cnt = 0;
    int max;

    max = 0;
    for (i = 0; i < N; i++) {
        cnt = 0;
        for (j = 0; j < M; j++) {
            if (p[j][i] == 0)
                cnt++;
            else {
                if (max < cnt)
                    max = cnt;
                cnt = 0;
            }
        }
        if (max < cnt)
            max = cnt;
    }
    return max;
}

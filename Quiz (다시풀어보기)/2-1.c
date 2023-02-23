#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int input(int*);
int* sel_out(int*, int*, int, int);
void output(int*, int);
int main() {
    int x[20], y[20];
    int X, Y, * r, N;

    X = input(x);
    Y = input(y);
    r = sel_out(x, y, X, Y);
    if (r == x) output(r, X);
    else output(r, Y);

    return 0;
}
int input(int* x) {
    int* p, cnt = 0;

    for (p = x;; p++) {
        scanf("%d", p);
        if (*p <= 0) break;
        cnt++;
    }
    return cnt;
}
int* sel_out(int* x, int* y, int X, int Y) {
    int N, * p, * q, flag = 0;

    if (X >= Y) N = Y;
    else N = X;
    for (p = x, q = y; p < x + N; p++, q++) {
        if (*p == *q) flag = 1;
        else if (*p < *q) return x;
        else return y;
    }
    if (X > Y) return y;
    else return x;
}
void output(int* r, int N) {
    int* p;
    for (p = r; p < r + N; p++)
        printf("%d ", *p);
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int arrsum(int* a, int* b);
int main() {
    int N, S, E;
    int x[100];
    int* p, sum;

    scanf("%d %d %d", &N, &S, &E);
    for (p = x; p < x + N; p++)
        scanf("%d", p);
    sum = arrsum(x + S, x + E);
    printf("%d", sum);

    return 0;
}
int arrsum(int* a, int* b) {
    int* p;
    int sum = 0;

    for (p = a; p <= b; p++)
        sum += *p;

    return sum;
}

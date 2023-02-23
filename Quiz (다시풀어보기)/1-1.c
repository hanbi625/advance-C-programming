#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N;
    int a, b, c, sum;
    double avg, x[100], *p, *q, tmp;

    scanf("%d", &N);
    for (p = x; p < x + N; p++) {
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        avg = sum / 3.0;
        *p = avg;
    }
    for (p = x; p < x + N-1; p++) {
        for (q = x; q < x + N - 1; q++)
            if (*q < *(q + 1)) {
                tmp = *q;
                *q = *(q + 1);
                *(q + 1) = tmp;
            }
    }
    for (p = x; p < x + N; p++)
        printf("%.2f\n", *p);

    return 0;
}

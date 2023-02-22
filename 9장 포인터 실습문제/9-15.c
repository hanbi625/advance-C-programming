#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ABC(int* p, int k);
int main() {
    int x[10], * p, i;

    for (p = x; p < x + 10; p++)
        scanf("%d", p);

    for (p = x, i = 10; p < x + 10; p++, i--)
        ABC(p, i);
    for (p = x; p < x + 10; p++)
        printf(" %d", *p);

    return 0;
}
void ABC(int* p, int k) {
    int* p;

    for (p = x; p < x + k - 1; p++) {
        if (*p < *(p + 1)) {
            int temp = *p;
            *p = *(p + 1);
            *(p + 1) = temp;
        }
    }
    /*
    int* p, *q;
    int max;
    q = x;
    max = *x;
    for (p = x; p < x + k; p++)
        if (*p > max) {
            max = *p;
            q = p;
        }
    p = x;
    int tmp = *p;
    *p = *q;
    *q = tmp;
    */
}

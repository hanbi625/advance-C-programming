#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void gcdlcm(int a, int b, int* x, int* y);
int main() {
    int a, b;
    int gcd, lcm;

    scanf("%d %d", &a, &b);
    gcdlcm(a, b, &gcd, &lcm);

    printf("%d %d", gcd, lcm);

    return 0;
}
void gcdlcm(int a, int b, int* x, int* y) {
    int i = 0, max = 0, min = 0;
    if (a >= b) max = a, min = b;
    else max = b, min = a;

    for (i = min; i >= 1; i--)
        if (a % i == 0 && b % i == 0)
            break;
    *x = i;
    for (i = max;; i++)
        if (i % a == 0 && i % b == 0)
            break;
    *y = i;
}
/*
#pragma warning(disable:4996)
#include <stdio.h>
void gcdlcm(int x, int y, int *px, int *py) {
    int max, i;

    if (x > y) max = x;
    else max = y;

    for (i = max; i >= 1; i--)
        if (x % i == 0 && y % i == 0)
            break;
    *px = i;

    for (i = 1;; i++)
        if (i % x == 0 && i % y == 0)
            break;
    *py = i;

}
int main() {
    int x, y;

    scanf("%d %d", &x, &y);
    gcdlcm(x, y, &x, &y);

    printf("%d %d", x, y);

    return 0;
}
*/

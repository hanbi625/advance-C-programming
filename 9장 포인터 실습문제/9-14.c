#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int add_to_k(int*, int*);
int main() {
    int N;
    int x[100], * p;
    int sum = 0;

    scanf("%d", &N);

    for (p = x; p < x + N; p++)
        scanf("%d", p);
    for (p = x; p < x + N; p++)
        sum += add_to_k(x, p);

    printf("%d", sum);

    return 0;
}
int add_to_k(int* x, int* y) {
    int sum = 0;
    int* p;

    for (p = x; p <= y; p++)
        sum += *p;

    return sum;

}

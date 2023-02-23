#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int input(char*);
int check_flag(char*, char*);
void output(char*, char*);
int main() {
    char x[100], y[100], *p, *q;
    int N;

    N = input(x);
    for (p = x, q = y; p < x + N; p++) {
        if (check_flag(x, p) == 0) {
            *q = *p;
            q++;
        }
    }
    output(y, q);

    return 0;
}
int input(char *x) {
    int N;
    char* p;
    scanf("%d", &N);
    getchar();
    for (p = x; p < x + N; p++)
        scanf("%c", p);

    return N;
}
int check_flag(char *x, char *p) {
    char* q;

    for (q = x; q < p; q++)
        if (*q == *p)
            return 1;
    return 0;
}
void output(char *y, char *p) {
    char* q;

    for (q = y; q < p; q++)
        printf("%c", *q);
}

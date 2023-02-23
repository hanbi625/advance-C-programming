#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print_C(char* x, char* p);
void delete_C(char* p);
int main() {
    char str[21], C, *p;
    int i, len = 0;

    scanf("%s", str);
    getchar();
    scanf("%c", &C);
    len = strlen(str);

    for (i = 0; str[i]; i++)
        if (str[i] == C)
            print_C(str, &str[i]);
    for (p = str; p < str + len; p++)
        if (*p == C) {
            delete_C(p);
            p--;
        }
    printf("%s", str);

    return 0;
}
void print_C(char* x, char* p) {
    char *num[20] = { "zero", "one", "two", "three", "four", "five", "six",
    "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
    "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char* q;
    int i = 0;

    for (q = x; q < p; q++)
        i++;
    printf("%s\n", num[i]);
}
void delete_C(char *p) {
    char* q;

    for (q = p; *q; q++)
        *q = *(q + 1);
}

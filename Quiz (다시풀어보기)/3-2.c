#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[21] = { 0 };
    char* p[] = { "zero", "one", "two", "three", "four", "five", "six",
    "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char C;
    int i, j, len2;

    scanf("%s", str);
    getchar();
    scanf("%c", &C);

    for (i = 0; str[i]; i++)
        if (str[i] == C)
            printf("%s\n", p[i]);
    for (i=0;str[i];i++)
        if (str[i] == C) {
            for (j = i; str[j]; j++)
                str[j] = str[j + 1];
            i--;
        }
    printf("%s", str);

    return 0;
}

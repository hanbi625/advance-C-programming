#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char* num[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char* digit[] = { "", "TEN", "HUN", "THO" };
    int N1[10];
    int N, i, j;

    scanf("%d", &N);
    i = 0;
    while (N) {
        N1[i] = N % 10;
        N /= 10;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
        if (N1[j] != 0)
            printf("%s %s ", num[N1[j]], digit[j]);

    return 0;
}

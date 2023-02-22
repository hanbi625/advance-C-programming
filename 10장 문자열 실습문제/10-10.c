#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, min, mini;
    int len = 0;
    char str[100][100];

    scanf("%d", &N);
    getchar();
    for (i = 0; i < N; i++)
        gets(str[i]);
    mini = 0;
    min = strlen(str[0]);
    for (i = 0; i < N; i++) {
        len = strlen(str[i]);
        if (min > len) {
            min = len;
            mini = i;
        }
    }
    puts(str[mini]);

    return 0;
}

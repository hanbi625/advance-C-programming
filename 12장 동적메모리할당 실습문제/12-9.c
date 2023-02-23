#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char** p = NULL, temp[101] = { 0 }, * tmp;
    int N, i, len = 0, j;

    scanf("%d", &N);
    getchar();
    p = (char**)malloc(N * sizeof(char*));
    if (p == NULL)
        return -1;
    for (i = 0; i < N; i++) {
        gets(temp);
        len = strlen(temp);
        p[i] = (char*)malloc((len + 1) * sizeof(char));
        if (p[i] == NULL)
            return -1;
        strcpy(p[i], temp);
    }
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1; j++)
            if (strlen(p[j]) < strlen(p[j + 1])) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
    for (i = 0; i < N; i++)
        printf("%s\n", p[i]);
    for (i = 0; i < N; i++)
        free(p[i]);
    free(p);
/*
Program
Good
This is string
language
*/

    return 0;
}

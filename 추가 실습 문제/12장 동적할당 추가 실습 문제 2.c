#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char temp[101], * p = NULL;
    char word[101][101];
    int i, j, k, len = 0, start, end, idx;

    gets(temp);
    len = strlen(temp);
    p = (char*)malloc((len + 1) * sizeof(char));
    if (p == NULL)
        return -1;
    strcpy(p, temp);
    start = 0, idx = 0;
    for (i = 0; i <= len; i++)
        if (p[i] == ' ' || p[i] == '\0') {
            end = i - 1;
            for (j = start, k = 0; j <= end; j++, k++)
                word[idx][k] = p[j];
            word[idx][k] = '\0';
            idx++;
            start = i + 1;
        }
    for (i = 0; i < idx; i++)
        printf("%s\n", word[i]);
    free(p);
    p = NULL;

    return 0;
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char* p = NULL, temp[101] = { 0 }, word[51][101] = { 0 }, * q;
    int len = 0, i, idx = 1, j;

    gets(temp);
    len = strlen(temp);
    p = (char*)malloc((len + 1) * sizeof(char));
    if (p == NULL)
        return -1;
    strcpy(p, temp);

    q = p;
    for (i = 0; i <= len; i++) {
        if (p[i] == ' ' || p[i] == '\0') {
            p[i] = '\0';
            strcpy(word[idx], q);
            idx++;
            q = p + i + 1;
        }
    }

    for (i = 0; i < idx - 1; i++)
        for (j = 0; j < idx - 1; j++) {
            if (strlen(word[j]) < strlen(word[j + 1])) {
                strcpy(temp, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], temp);
            }
            else if (strlen(word[j]) == strlen(word[j + 1]) &&
                strcmp(word[j], word[j + 1]) > 0) {
                strcpy(temp, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], temp);
            }
        }
    for (i = 0; i < idx; i++)
        printf("%s\n", word[i]);
    free(p);
    /*red orange yellow green blue purple*/
    return 0;
}
/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char temp[101], word[50][101], *p = NULL;
    int i, j, k, len = 0;
    int start, end, idx;

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
    for (i = 0; i < idx - 1; i++) 
        for (j = 0; j < idx - 1; j++) {
            if (strlen(word[j]) < strlen(word[j + 1])) {
                strcpy(temp, word[j]);
                strcpy(word[j], word[j + 1]);
                strcpy(word[j + 1], temp);
            }
            if (strlen(word[j]) == strlen(word[j + 1]))
                if (strcmp(word[j], word[j + 1]) > 0) {
                    strcpy(temp, word[j]);
                    strcpy(word[j], word[j + 1]);
                    strcpy(word[j + 1], temp);
                }
        }
    for (i = 0; i < idx; i++)
        printf("%s\n", word[i]);
    free(p);
    p = NULL;

    return 0;
}
*/

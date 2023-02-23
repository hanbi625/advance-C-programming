#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[101] = { 0 }, p[101][101] = { 0 }, tmp[101] = { 0 }, *q;
    int i, j, k, idx, len = 0;

    gets(str);
    len = strlen(str);

    q = str;
    idx = 0;
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            str[i] = '\0';
            strcpy(p[idx], q);
            idx++;
            q = &str[i + 1];
        }
    }
    for (i = 0; i < idx - 1; i++)
        for (j = 0; j < idx - 1; j++)
            if (strcmp(p[j], p[j + 1]) > 0) {
                strcpy(tmp, p[j]);
                strcpy(p[j], p[j + 1]);
                strcpy(p[j + 1], tmp);
            }

    for (i = 0; i < idx; i++)
        printf("%s\n", p[i]);

    return 0;
}
/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[101] = { 0 }, p[101][101] = { 0 }, tmp[101] = { 0 };
    int i, j, k, idx, len = 0, start = 0, end = 0;

    gets(str);
    len = strlen(str);

    idx = 0;
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            for (j = start, k = 0; j <= end; j++, k++)
                p[idx][k] = str[j];
            start = i + 1;
            idx++;
        }
    }
    for (i = 0; i < idx - 1; i++)
        for (j = 0; j < idx - 1; j++)
            if (strcmp(p[j], p[j + 1]) > 0) {
                strcpy(tmp, p[j]);
                strcpy(p[j], p[j + 1]);
                strcpy(p[j + 1], tmp);
            }

    for (i = 0; i < idx; i++)
        printf("%s\n", p[i]);

    return 0;
}
*/
/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[101] = { 0 }, *p[101] = { 0 }, *tmp;
    int i, j, idx, len = 0;

    gets(str);
    len = strlen(str);

    p[0] = str;
    idx = 1;

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            str[i] = '\0';
            p[idx] = &str[i + 1];
            idx++;
        }
    }

    for (i = 0; i < idx - 1; i++) {
        for (j = 0; j < idx - 1; j++)
            if (strcmp(p[j], p[j + 1]) > 0) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
    }
    for (i = 0; i < idx; i++)
        printf("%s\n", p[i]);

    return 0;
}
*/

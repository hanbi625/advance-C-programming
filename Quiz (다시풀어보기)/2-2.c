#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[1001] = { 0 }, * p[501] = { 0 }, mark;
    char* i;
    int len = 0, idx = 1, j;

    for (i = str;; i++) {
        scanf("%c", i);
        if (*i == '.' || *i == '?' || *i == '!')
            break;
        len++;
    }
    mark = *(str + len);
    p[0] = str;
    for (i = str; i <= str + len; i++) {
        if (*i == ' ' || *i == '?' || *i == '!' || *i == '.') {
            *i = '\0';
            p[idx] = i + 1;
            idx++;
        }
    }
    for (j = idx - 1; j > 0; j--)
        printf("%s ", p[j]);
    printf("%s%c", p[0], mark);

    return 0;
}

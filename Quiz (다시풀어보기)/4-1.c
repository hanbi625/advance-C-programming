#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str[1001] = { 0 };
    char *p[501], *max;
    char *q;
    int i = 0, idx = 1, start = 0;
    int len = 0, m;

    for (q = str;; q++) {
        scanf("%c", q);
        if (*q == '.' || *q == '?' || *q == '!')
            break;
    }
    p[0] = str;
    for (i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            p[idx] = &str[i + 1];
            idx++;
            start = i + 1;
            str[i] = '\0';
        }
        else if (str[i] == '.' || str[i] == '?' || str[i] == '!')
            str[i] = '\0';
    }
    for (i = idx - 1; i >= 0; i--)
        printf("%s\n", p[i]);
    max = p[0];
    m = strlen(p[0]);
    for (i = 0; i < idx; i++) {
        len = strlen(p[i]);
        if (m < len) {
            m = len;
            max = p[i];
        }
    }
    printf("%s\n", max);

    return 0;
}

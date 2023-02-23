#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str[101], *p[101], *tmp;
    int i, idx = 1, j;

    gets(str);
    p[0] = str;
    for (i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            str[i] = '\0';
            p[idx] = &str[i + 1];
            idx++;
        }
    }
    for (i = 0; i < idx - 1; i++) {
        for (j = 0; j < idx - 1; j++) {
            if (strlen(p[j]) > strlen(p[j + 1])) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
            else if (strlen(p[j])==strlen(p[j+1]))
                if (strcmp(p[j], p[j + 1]) > 0) {
                    tmp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = tmp;
                }
        }
    }
    for (i = 0; i < idx; i++)
        printf("%s\n", p[i]);

    return 0;
}

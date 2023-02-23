#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str[100] = { 0 };
    char *p;
    int cnt = 0, max = 0, len = 0;

    for (p = str;; p++) {
        scanf("%c", p);
        if (*p == '#')
            break;
        cnt++;
    }
    
    for (p = str; p < str + cnt + 1; p++) {
        if (*p >= 'a' && *p <= 'z') {
            printf("%c", *p);
            len++;
        }
        else {
            printf("\n");
            if (max < len)
                max = len;
            len = 0;
        }
    }
    printf("\n%d\n", max);

    return 0;
}

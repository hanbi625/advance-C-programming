#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char x[10];
    char* p, * q, * mp = NULL;
    int cnt = 0, max;

    for (p = x; p < x + 10; p++)
        scanf("%c", p);
    max = 0;
    for (p = x; p < x + 10; p++) {
        cnt = 0;
        for (q = x; q < x + 10; q++)
            if (*p == *q)
                cnt++;
        if (max < cnt) {
            max = cnt;
            mp = p;
        }
    }
    printf("%c %d", *mp, max);
    
    return 0;
}

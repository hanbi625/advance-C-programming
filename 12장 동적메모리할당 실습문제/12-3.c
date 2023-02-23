#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, cnt1 = 0, cnt2 = 0;
    char *p = NULL, ch1, ch2;

    scanf("%d", &N);
    getchar();
    p = (char*)malloc((N + 1) * sizeof(char));
    if (p == NULL)
        return -1;
    scanf("%s", p);
    getchar();
    scanf("%c %c", &ch1, &ch2);

    for (i = 0; i < N; i++) {
        if (p[i] == ch1)
            cnt1++;
        if (p[i] == ch2)
            cnt2++;
    }
    printf("%d %d\n", cnt1, cnt2);
    free(p);
    p = NULL;

    return 0;
}
/* 문자 하나씩 입력받을 수도 있습니당
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, cnta, cntb;
    char* p = NULL;
    char a, b;

    scanf("%d", &N);
    getchar();
    p = (char*)malloc(N * sizeof(char));
    if (p == NULL) {
        printf("Not enough memory!\n");
        return -1;
    }
    for (i = 0; i < N; i++)
        scanf("%c", &p[i]);
    getchar();
    scanf("%c %c", &a, &b);
    cnta = 0, cntb = 0;
    for (i = 0; i < N; i++) {
        if (p[i] == a)
            cnta++;
        if (p[i] == b)
            cntb++;
    }
    printf("%d %d", cnta, cntb);

    free(p);

    return 0;
}
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str[1001], * p[100];
    char* tmp;
    int K, cnt = 0, i, j;
    int idx = 0, len = 0;
    char A[100], B[100];
    int num;

    gets(str);
    scanf("%d", &K);

    p[idx] = str;

    idx++;

    len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ') {
            str[i] = '\0';
            p[idx] = &str[i + 1];
            idx++;
        }
    }
    for (i = 0; i < idx; i++) {
        for (j = i + 1; j < idx; j++)
            if (strlen(p[i]) < strlen(p[j])) {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
            else if (strlen(p[i]) == strlen(p[j])) {
                if (strcmp(p[i], p[j]) > 0) {
                    tmp = p[i];
                    p[i] = p[j];
                    p[j] = tmp;
                }
            }
    }
    printf("%s\n", p[K - 1]);
    strcpy(A, p[K - 1]);
    for (i = 0; i < idx; i++) {
        if (i == K - 1)
            continue;
        strcpy(B, p[i]);
        cnt = 0;
        for (int a = 0; A[a]; a++)
            for (int b = 0; B[b]; b++)
                if (A[a] == B[b]) {
                    cnt++;
                    B[b] = ' ';
                    break;
                }
        if (strlen(A) > strlen(B))
            num = strlen(A) - cnt;
        else
            num = strlen(B) - cnt;
        if (num >= -1 && num <= 1)
            printf("%s\n", p[i]);
    }

    return 0;
}

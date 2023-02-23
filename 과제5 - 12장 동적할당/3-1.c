#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
    char* name, id[5], * sub;
    double score;
} st;
int main() {
    st* p = NULL, tmp;
    int N, i, K;


    scanf("%d", &N);
    getchar();
    p = (st*)malloc(N * sizeof(st));
    if (p == NULL)
        return -1;

    int j, cnt = 0, k, len = 0, q = 0;
    int s = 0;
    for (i = 0; i < N; i++) {
        char temp[101] = { 0 };
        gets(temp);
        len = strlen(temp);
        cnt = 0;
        for (j = 0; temp[j] != ' '; j++)
            cnt++;
        p[i].name = NULL;
        p[i].name = (char*)malloc((cnt + 1) * sizeof(char));
        if (p[i].name == NULL)
            return -1;
        for (j = 0, q = 0; j < cnt; j++, q++)
            p[i].name[q] = temp[j];
        p[i].name[q] = '\0';

        for (k = j + 1, q = 0; k < j + 5; k++, q++)
            p[i].id[q] = temp[k];
        p[i].id[4] = '\0';

        cnt = 0;
        for (k = j + 6; temp[k] != ' '; k++)
            cnt++;
        p[i].sub = NULL;
        p[i].sub = (char*)malloc((cnt + 1) * sizeof(char));
        if (p[i].sub == NULL)
            return -1;
        for (k = j + 6, q = 0; temp[k] != ' '; k++, q++)
            p[i].sub[q] = temp[k];
        p[i].sub[q] = '\0';
        s = 0;
        if (temp[k + 1] >= '0' && temp[k + 1] <= '9') {
            s = s * 10 + (temp[k + 1] - '0');
            if (temp[k + 2] >= '0' && temp[k + 2] <= '9') {
                s = s * 10 + (temp[k + 2] - '0');
                if (temp[k + 3] >= '0' && temp[k + 3] <= '9')
                    s = s * 10 + (temp[k + 3] - '0');
            }
        }
        p[i].score = (double)s;
    }
    scanf("%d", &K);

    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1; j++)
            if (p[j].score < p[j + 1].score) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
    printf("%s %s %s %.2lf", p[K - 1].name, p[K - 1].id, p[K - 1].sub, p[K - 1].score);

    for (i = 0; i < N; i++) {
        free(p[i].name);
        free(p[i].sub);
    }
    free(p);

    return 0;
}

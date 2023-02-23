#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct subject {
    char* name;
    double score;
} sub;
typedef struct student {
    char* name, id[5];
    int num;
    struct subject* psub;
    double avg;
} st;
int main() {
    st* p = NULL, tmp;
    char temp[101] = { 0 };
    int N, K, i, cnt = 0;

    scanf("%d", &N);
    getchar();
    p = (st*)malloc(N * sizeof(st));
    if (p == NULL)
        return -1;

    int j, k, len = 0, q = 0;
    int a;
    for (i = 0; i < N; i++) {
        gets(temp);

        cnt = 0;
        p[i].avg = 0;

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
        for (a = j + 5; temp[a] != '\0'; a++)
            if (temp[a] == ' ')
                cnt++;
        p[i].num = cnt / 2;

        p[i].psub = NULL;
        p[i].psub = (sub*)malloc(p[i].num * sizeof(sub));
        if (p[i].psub == NULL)
            return -1;
        a = k;
        for (int n = 0; n < p[i].num; n++) {
            int sum = 0, b, c;
            cnt = 0;
            for (b = a + 1; temp[b] != ' '; b++)
                cnt++;
            p[i].psub[n].name = NULL;
            p[i].psub[n].name = (char*)malloc((cnt + 1) * sizeof(char));
            if (p[i].psub[n].name == NULL)
                return -1;

            for (a = a + 1, q = 0; temp[a] != ' '; a++, q++)
                p[i].psub[n].name[q] = temp[a];
            p[i].psub[n].name[q] = '\0';

            if (temp[a + 1] >= '0' && temp[a + 1] <= '9') {
                sum = sum * 10 + (temp[a + 1] - '0');
                if (temp[a + 2] >= '0' && temp[a + 2] <= '9') {
                    sum = sum * 10 + (temp[a + 2] - '0');
                    if (temp[a + 3] >= '0' && temp[a + 3] <= '9') {
                        sum = sum * 10 + (temp[a + 3] - '0');
                        a++;
                    }
                    a++;
                }
                a++;
            }
            a++;
            p[i].psub[n].score = (double)sum;
            p[i].avg += p[i].psub[n].score;
        }
        p[i].avg = p[i].avg / (double)p[i].num;
    }
    scanf("%d", &K);
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1; j++) {
            if (p[j].avg < p[j + 1].avg) {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
            if (p[j].avg == p[j + 1].avg)
                if (strcmp(p[j].id, p[j + 1].id) > 0) {
                    tmp = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = tmp;
                }
        }
    double max = 0;
    char m[101] = { 0 };
    strcpy(m, p[K - 1].psub[0].name);
    for (i = 0; i < p[K - 1].num; i++) {
        if (max < p[K - 1].psub[i].score) {
            max = p[K - 1].psub[i].score;
            strcpy(m, p[K - 1].psub[i].name);
        }
    }
    printf("%s %s %.2lf %s %.2lf", p[K - 1].name, p[K - 1].id, p[K - 1].avg, m, max);


    for (i = 0; i < N; i++) {
        for (j = 0; j < p[i].num; j++)
            free(p[i].psub[j].name);
        free(p[i].name);
        free(p[i].psub);
    }
    free(p);
    return 0;
}

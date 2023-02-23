#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char dep[51], name[21], birth[21];
};
struct student input();
void swap(struct student* p, struct student* q);
void output(struct student p);
int main() {
    struct student st[100], * p, * q;
    int N;

    scanf("%d", &N);
    getchar();
    for (p = st; p < st + N; p++)
        *p = input();
    for (p = st; p < st + N - 1; p++)
        for (q = st; q < st + N - 1; q++)
            if (strcmp(q->dep, (q + 1)->dep) > 0)
                swap(q, q + 1);
    for (p = st; p < st + N; p++)
        output(*p);

    return 0;
}
struct student input() {
    struct student p;
    gets(p.dep);
    scanf("%s %s", p.name, p.birth);
    getchar();
    return p;
}
void swap(struct student* p, struct student* q) {
    struct student tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}
void output(struct student p) {
    printf("%s %s %s\n", p.dep, p.name, p.birth);
}

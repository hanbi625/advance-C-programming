#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char name[31];
    int id;
    int subnum;
    char sub[10][31];
    double grade;
};
void input(struct student st[]);
void sort_s(struct student st[], int cnt);
void delet(struct student st[], struct student* i, int cnt);
void print_s(struct student st[], int cnt);
int main() {
    struct student st[100], str[100], *p, *i;
    char order, dname[31];
    int j = 0, cnt = 0;

    p = st;
    while (1) {
        scanf("%c", &order);
        if (order == 'I') {
            input(p);
            p++;
            cnt++;
        }
        else if (order == 'S') {
            for (j = 0; j < cnt; j++) {
                strcpy(str[j].name, st[j].name);
                str[j].id = st[j].id;
                str[j].subnum = st[j].subnum;
                str[j].grade = st[j].grade;
            }
            sort_s(str, cnt);
        }

        else if (order == 'D') {
            scanf("%s", dname);
            for (i = st; i < st + cnt; i++) {
                if (strcmp(i->name, dname) == 0) {
                    delet(st, i, cnt);
                    p--;
                    cnt -= 1;
                    break;
                }
            }
        }

        else if (order == 'P') {
            if (cnt != 0)
                print_s(st, cnt);
        }

        else if (order == 'Q')
            break;
    }

    return 0;
}
void input(struct student st[]) {
    int j = 0;
    double score, sum = 0, avg;
    scanf("%s %d %d", st->name, &st->id, &st->subnum);
    getchar();
    for (j = 0; j < st->subnum; j++) {
        scanf("%s %lf ", st->sub[j], &score);
        sum += score;
    }
    avg = sum / st->subnum;
    st->grade = avg;
}
void sort_s(struct student st[], int cnt) {
    struct student* i, * j, tmp;

    for (i = st; i < st + cnt ; i++) {
        for (j = i+1; j < st + cnt ; j++)
            if (strcmp(i->name, j->name) > 0) {
                tmp = *i;
                *i = *j;
                *j = tmp;
            }
    }
    if (cnt > 0)
        print_s(st, cnt);
}
void print_s(struct student st[], int cnt) {
    struct student* i;
    for (i = st; i < st + cnt; i++)
        printf("%s %d %d %.2f\n", i->name, i->id, i->subnum, i->grade);
}
void delet(struct student st[], struct student* i, int cnt) {
    struct student* j;

    for (j = i + 1; j < st + cnt; j++)
        *(j - 1) = *j;

}

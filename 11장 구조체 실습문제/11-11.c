#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct student {
    char name[10];
    int score;
};
struct student *select_min(struct student* p);
int main() {
    struct student st[5];
    struct student* min;
    int i;

    for (i = 0; i < 5; i++)
        scanf("%s %d", st[i].name, &st[i].score);
    min = select_min(st);
    printf("%s %d", min->name, min->score);

    return 0;
}
struct student* select_min(struct student* p) {
    struct student* m;
    int min, i;
    m = p;
    min = p->score;
    for (i = 0; i < 5; i++)
        if (min > (p + i)->score) {
            min = (p + i)->score;
            m = p + i;
        }

    return m;

}

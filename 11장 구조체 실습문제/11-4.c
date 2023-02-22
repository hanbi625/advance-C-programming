#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct student {
    char name[20];
    int s1, s2, s3;
    double grade;
    char credit;
};
int main() {
    struct student st[20];
    int N, i, sum = 0;

    scanf("%d", &N);
    getchar();
    for (i = 0; i < N; i++) {
        scanf("%s %d %d %d", st[i].name, &st[i].s1, &st[i].s2, &st[i].s3);
        getchar();
        sum = st[i].s1 + st[i].s2 + st[i].s3;
        st[i].grade = sum / 3.0;
    }
    for (i = 0; i < N; i++) {
        if (st[i].grade >= 90)
            st[i].credit = 'A';
        else if (st[i].grade >= 80)
            st[i].credit = 'B';
        else if (st[i].grade >= 70)
            st[i].credit = 'C';
        else
            st[i].credit = 'F';
        printf("%s %.1f %c\n", st[i].name, st[i].grade, st[i].credit);
    }

    return 0;
}

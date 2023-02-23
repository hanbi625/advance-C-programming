#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct address {
    char city[21], street[51], zipcode[6];
};
struct student {
    char name[21];
    double dis;
    struct address addr;
};
int main() {
    struct student st[100], tmp;
    int i, N = 0;
    int maxi, mini;
    double max, min;

    for (i = 0;; i++) {
        scanf("%s", st[i].name);
        if (strcmp(st[i].name, "0") == 0)
            break;
        getchar();
        scanf("%s %s %s %lf", st[i].addr.city, st[i].addr.street, st[i].addr.zipcode, &st[i].dis);
        getchar();
        N++;
    }
    max = st[0].dis;
    maxi = 0;
    for (i = 0; i < N; i++) {
        if (max < st[i].dis) {
            max = st[i].dis;
            maxi = i;
        }
    }
    min = st[0].dis;
    mini = 0;
    for (i = 0; i < N; i++) {
        if (min > st[i].dis) {
            min = st[i].dis;
            mini = i;
        }
    }
    printf("%s %s %s %s %.2f\n", st[maxi].name, st[maxi].addr.city, st[maxi].addr.street,
        st[maxi].addr.zipcode, st[maxi].dis);
    printf("%s %s %s %s %.2f\n", st[mini].name, st[mini].addr.city, st[mini].addr.street,
        st[mini].addr.zipcode, st[mini].dis);

    return 0;
}

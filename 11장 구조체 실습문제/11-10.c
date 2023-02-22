#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct date {
    int year, month, day;
};
struct date *select_min(struct date* a, struct date* b);
int main() {
    struct date d1, d2, *d;

    scanf("%d/%d/%d", &d1.year, &d1.month, &d1.day);
    scanf("%d/%d/%d", &d2.year, &d2.month, &d2.day);
    d = select_min(&d1, &d2);
    printf("%d/%d/%d", d->year, d->month, d->day);

    return 0;
}
struct date *select_min(struct date* a, struct date* b) {
    if (a->year < b->year)
        return a;
    else if (a->year == b->year) {
        if (a->month < b->month)
            return a;
        else if (a->month == b->month) {
            if (a->day < b->day)
                return a;
            else
                return b;
        }
        else return b;
    }
    else return b;
}

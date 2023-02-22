#pragma warning(disable:4996)
#include <stdio.h>
struct time {
    int hour, min, sec;
};
int main() {
    struct time t1, t2;
    int h, m, s;

    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    if (t2.sec >= t1.sec) {
        s = t2.sec - t1.sec;
        if (t2.min >= t1.min)
            m = t2.min - t1.min;
        else {
            m = t2.min + 60 - t1.min;
            t2.hour -= 1;
        }
    }
    else {
        s = t2.sec + 60 - t1.sec;
        t2.min -= 1;
        if (t2.min >= t1.min)
            m = t2.min - t1.min;
        else {
            m = t2.min + 60 - t1.min;
            t2.hour -= 1;
        }
    }
    h = t2.hour - t1.hour;

    printf("%d %d %d", h, m, s);

    return 0;
}

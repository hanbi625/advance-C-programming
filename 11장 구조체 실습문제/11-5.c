#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct student {
    char name[8];
    int kor, eng, math;
    double avg;
    char credit;
};
int main() {
    struct student st[50], *p = st;
    int N, sum;
    
    scanf("%d", &N);
    getchar();
    for (p = st; p < st + N; p++) {
        scanf("%s %d %d %d", p->name, &p->kor, &p->eng, &p->math);
        sum = p->kor + p->eng + p->math;
        p->avg = sum / 3.0;
        if (p->avg >= 90)
            p->credit = 'A';
        else if (p->avg >= 80)
            p->credit = 'B';
        else if (p->avg >= 70)
            p->credit = 'C';
        else
            p->credit = 'D';
    }
    
    for (p = st; p < st + N; p++)
        printf("%s %.1f %c\n", p->name, p->avg, p->credit);

    return 0;
}

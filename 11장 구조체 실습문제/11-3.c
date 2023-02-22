#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct student {
    char name[10];
    int score;
};
int main() {
    struct student st[5];
    int i, sum = 0;
    double avg;

    for (i = 0; i < 5; i++) {
        scanf("%s %d", st[i].name, &st[i].score);
        getchar();
        sum += st[i].score;
    }
    avg = sum / 5.0;
    for (i = 0; i < 5; i++)
        if (st[i].score <= avg)
            printf("%s\n", st[i].name);

    return 0;
}

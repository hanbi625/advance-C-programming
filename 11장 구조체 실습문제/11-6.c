#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct student {
    int gender, weight, height;
};
int main() {
    struct student st[10];
    int N, i;
    int fir = 0, sec = 0, thi = 0;
    
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d %d %d", &st[i].gender, &st[i].weight, &st[i].height);

    for (i = 0; i < N; i++) {
        if (st[i].gender == 1) {
            if (st[i].weight < 60) {
                if (st[i].height < 165)
                    fir++;
                else if (st[i].height >= 165 && st[i].height < 175)
                    sec++;
                else
                    thi++;
            }
            else if (st[i].weight >= 60 && st[i].weight < 70) {
                if (st[i].height < 165)
                    thi++;
                else if (st[i].height >= 165 && st[i].height < 175)
                    fir++;
                else
                    sec++;
            }
            else {
                if (st[i].height < 165)
                    sec++;
                else if (st[i].height >= 165 && st[i].height < 175)
                    thi++;
                else
                    fir++;
            }
        }
        else {
            if (st[i].weight < 50) {
                if (st[i].height < 165)
                    fir++;
                else if (st[i].height >= 165 && st[i].height < 175)
                    sec++;
                else
                    thi++;
            }
            else if (st[i].weight >= 50 && st[i].weight < 60) {
                if (st[i].height < 165)
                    thi++;
                else if (st[i].height >= 165 && st[i].height < 175)
                    fir++;
                else
                    sec++;
            }
            else {
                if (st[i].height < 165)
                    sec++;
                else if (st[i].height >= 165 && st[i].height < 175)
                    thi++;
                else
                    fir++;
            }
        }
    }
    printf("%d %d %d", fir, sec, thi);

    return 0;
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct student {
    char name[10];
    int quiz[3];
    double avg;
};
void read_data(struct student a[]);
void cal_avg(struct student a[]);
void sort(struct student a[]);
void print_score(struct student a[]);
int main() {
    struct student st[10];

    read_data(st);
    cal_avg(st);
    sort(st);
    print_score(st);

    return 0;
}
void read_data(struct student a[]) {
    int i, j;

    for (i = 0; i < 10; i++) {
        scanf("%s ", a[i].name);
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i].quiz[j]);
    }
}
void cal_avg(struct student a[]) {
    int i, j, sum = 0;

    for (i = 0; i < 10; i++) {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum += a[i].quiz[j];
        a[i].avg = sum / 3.0;
    }
}
void sort(struct student a[]) {
    struct student tmp;
    int i, j;

    for (i = 0; i < 9; i++) 
        for (j = 0; j < 9; j++)
            if (a[j].avg < a[j + 1].avg) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
}
void print_score(struct student a[]) {
    printf("%s %.2f\n", a[0].name, a[0].avg);
    printf("%s %.2f\n", a[9].name, a[9].avg);
    for (int i = 7; i < 10; i++)
        printf("%s %.2f\n", a[i].name, a[i].avg);
}

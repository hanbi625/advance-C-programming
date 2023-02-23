#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
    char name[8];
    int kor, eng, math;
    double avg;
} ABC;
int main() {
    ABC* p = NULL;
    int i, N, g = 0, b = 0;

    scanf("%d", &N);
    getchar();

    p = (ABC*)malloc(N * sizeof(ABC));
    if (p == NULL)
        return -1;

    for (i = 0; i < N; i++) {
        scanf("%s %d %d %d", p[i].name, &p[i].kor, &p[i].eng, &p[i].math);
        getchar();
        p[i].avg = (p[i].kor + p[i].eng + p[i].math) / 3.0;
    }
    for (i = 0; i < N; i++) {
        printf("%s %.1f ", p[i].name, p[i].avg);
        if (p[i].kor >= 90 || p[i].eng >= 90 || p[i].math >= 90)
            printf("GREAT ");
        if (p[i].kor < 70 || p[i].eng < 70 || p[i].math < 70)
            printf("BAD");
        printf("\n");
    }
    free(p);


    return 0;
}

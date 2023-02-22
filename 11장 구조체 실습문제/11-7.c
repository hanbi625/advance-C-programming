#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct NUM {
    int num[10];
    int rank[10];
};
int main() {
    struct NUM N;
    int i, j, th, se;

    for (i = 0; i < 10; i++)
        scanf("%d", &N.num[i]);
    for (i = 0; i < 10; i++) {
        N.rank[i] = 0;
        for (j = 0; j < 10; j++)
            if (N.num[i] <= N.num[j])
                N.rank[i]++;
        if (N.rank[i] == 3)
            th = i;
        if (N.rank[i] == 7)
            se = i;
    }
    printf("%d %d", N.num[th], N.num[se]);
    

    return 0;
}

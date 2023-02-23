#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char dep[51], name[21], birth[21];
};
int main() {
    struct student st[100], tmp;
    int N, i, j;

    scanf("%d", &N);
    getchar();
    for (i = 0; i < N; i++) {
        gets(st[i].dep);
        scanf("%s %s", st[i].name, st[i].birth);
        getchar();
    }
    for (i = 0; i < N - 1; i++) 
        for (j = 0; j < N - 1; j++) {
            if (strcmp(st[j].dep, st[j + 1].dep) > 0) {
                tmp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = tmp;
            }
            else if (strcmp(st[j].dep, st[j + 1].dep) == 0) {
                if (strcmp(st[j].name, st[j + 1].name) > 0) {
                    tmp = st[j];
                    st[j] = st[j + 1];
                    st[j + 1] = tmp;
                }
                else if (strcmp(st[j].name, st[j + 1].name) == 0)
                    if (strcmp(st[j].birth, st[j + 1].birth) > 0) {
                        tmp = st[j];
                        st[j] = st[j + 1];
                        st[j + 1] = tmp;
                    }
            }
        }
    for (i = 0; i < N; i++)
        printf("%s %s %s\n", st[i].dep, st[i].name, st[i].birth);


    return 0;
}

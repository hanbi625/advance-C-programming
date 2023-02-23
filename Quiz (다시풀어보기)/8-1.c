#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct customer {
    char id[5], * name, * phone;
} ABC;
int main() {
    ABC* p = NULL;
    char temp1[101] = { 0 }, temp2[101] = { 0 }, fid[5] = { 0 };
    int i, N, len = 0;

    scanf("%d", &N);
    getchar();
    p = (ABC*)malloc(N * sizeof(ABC));
    if (p == NULL)
        return -1;

    for (i = 0; i < N; i++) {
        scanf("%s %s", temp1, temp2);

        len = strlen(temp1);
        (p + i)->name = (char*)malloc((len + 1) * sizeof(char));
        if ((p + i)->name == NULL)
            return -1;
        strcpy((p + i)->name, temp1);

        len = strlen(temp2);
        (p + i)->phone = (char*)malloc((len + 1) * sizeof(char));
        if ((p + i)->phone == NULL)
            return -1;
        strcpy((p + i)->phone, temp2);

        strcpy((p + i)->id, temp2 + 9);
    }
    scanf("%s", fid);

    for (i = 0; i < N; i++)
        if (strcmp(fid, (p + i)->id) == 0)
            printf("%s %s %d", (p + i)->name, (p + i)->phone, i + 1);
    for (i = 0; i < N; i++) {
        free((p + i)->name);
        free((p + i)->phone);
    }
    free(p);
    return 0;
}

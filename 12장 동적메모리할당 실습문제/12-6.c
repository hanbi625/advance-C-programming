#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, tmp, cnt = 0;;
    char* p = NULL;

    scanf("%d", &N);
    getchar();
    p = (char*)malloc(N * sizeof(char));

    if (p == NULL)
        return -1;

    for (i = 0; i < N; i++)
        scanf("%c", &p[i]);
    for (i = 0; i < N; i++) {
        if (strncmp(p + i, "cat", 3) == 0)
            cnt++;
    }
    printf("%d", cnt);
    

    if (p != NULL)
        free(p);

    return 0;
}

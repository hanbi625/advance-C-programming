#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int N, i, len = 0, cnt = 0, max = 0, j, maxi = 0;
    int x = 0;
    char X[101] = { 0 }, ** Y = NULL;
    char temp[101] = { 0 };

    scanf("%d %s", &N, X);
    getchar();
    x = strlen(X);
    Y = (char**)malloc(N * sizeof(char*));
    if (Y == NULL)
        return -1;

    for (i = 0; i < N; i++) {
        gets(temp);
        len = strlen(temp);
        Y[i] = (char*)malloc((len + 1) * sizeof(char));
        if (Y[i] == NULL)
            return -1;
        strcpy(Y[i], temp);
        cnt = 0;
        for (j = 0; j < len; j++) {
            if (strncmp(Y[i] + j, X, x) == 0) {
                cnt++;
                j += (x - 1);
            }
        }
        if (max < cnt) {
            max = cnt;
            maxi = i;
        }
    }
    if (max > 0)
        printf("%s", Y[maxi]);
    else printf("NONE\n");

    for (i = 0; i < N; i++)
        free(Y[i]);
    free(Y);

    return 0;
}

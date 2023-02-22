#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str1[81], str2[11];
    int len1 = 0, len2 = 0, i, j, flag = 1;

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("%d ", len1);

    for (i = 0; i < len1; i++) {
        flag = 1;
        for (j = 0; j < len2; j++)
            if (str1[i + j] != str2[j])
                flag = 0;
        if (flag == 1)
            break;
    }
    printf("%d ", flag);

    return 0;
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    int flag = 0, cnt = 0;

    gets(str1);
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    j = 0;
    for (i = 0; i < len1; i++) {
        flag = 0;
        j = 0;
        if (str1[i] == str2[j]) {
            for (j = 0; j < len2; j++)
                if (str1[i + j] != str2[j]) {
                    flag = 1;
                    break;
                }
            if (flag == 0) {
                if ((str1[i - 1] >= 'a' && str1[i - 1] <= 'z') || (str1[i + len2] >= 'a' && str1[i + len2] <= 'z'))
                    ;
                else {
                    i += j - 1;
                    cnt++;
                }
            }
        }
    }

    printf("%d", cnt);

    return 0;
}

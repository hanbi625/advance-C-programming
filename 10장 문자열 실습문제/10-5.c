#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str1[42] = { 0 }, str2[21] = { 0 };
    int idx, i = 0, cnt1 = 0, cnt2 = 0;

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    scanf("%d", &idx);
    while (str1[i]) {
        cnt1++;
        i++;
    }
    i = 0;
    while (str2[i]) {
        cnt2++;
        i++;
    }
    for (i = cnt1 - 1; i >= idx; i--)
        str1[i + cnt2] = str1[i];
    for (i = 0; i < cnt2; i++)
        str1[i + idx] = str2[i];

    printf("%s", str1);
    /*
    char str1[42] = { 0 }, str2[21] = { 0 };
    int idx, i = 0, j, k, cnt1 = 0, cnt2 = 0;

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    scanf("%d", &idx);
    while (str1[i]) {
        cnt1++;
        i++;
    }
    i = 0;
    while (str2[i]) {
        cnt2++;
        i++;
    }

    for (i = 0; i < cnt1 + cnt2; i++) {
        if (i == idx) {
            k = cnt1 - 1;
            for (j = cnt1+cnt2-1; j >=idx; j--) {
                str1[j] = str1[k];
                k--;
            }
            k = 0;
            for (j = idx; j < idx + cnt2; j++) {
                str1[j] = str2[k];
                k++;
            }
        }
    }
    str1[cnt1 + cnt2] = '\0';
    printf("%s", str1);
    return 0;
    */
    return 0;
}

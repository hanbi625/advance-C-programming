#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str1[42] = { 0 }, str2[21] = { 0 };
    int idx, i = 0, cnt1 = 0, cnt2 = 0;
    int order;

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    scanf("%d", &idx);
    scanf("%d", &order);
    while (str1[i]) {
        cnt1++;
        i++;
    }
    i = 0;
    while (str2[i]) {
        cnt2++;
        i++;
    }
    if (order == 0) {
        for (i = cnt1 - 1; i >= idx; i--)
            str1[i + cnt2] = str1[i];
        for (i = 0; i < cnt2; i++)
            str1[i + idx] = str2[i];
    }
    else {
        for (i = cnt1 - 1; i >= idx; i--)
            str1[i + cnt2] = str1[i];
        for (i = 0; i < cnt2; i++)
            str1[i + idx] = str2[cnt2 - i - 1];
    }

    printf("%s", str1);
    return 0;
  /*
  char str1[41], str2[20];
    int idx, cnt1 = 0, cnt2 = 0, N;
    int i = 0, j = 0, k = 0, q = 0;

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    scanf("%d", &idx);
    scanf("%d", &N);

    while (str1[i]) {
        cnt1++;
        i++;
    }

    i = 0;
    while (str2[i]) {
        cnt2++;
        i++;
    }

    for (j = 0; j < cnt2; j++) {
        for (k = j + cnt1 - 1; k > idx + j - 1; k--)
            str1[k + 1] = str1[k];
    }
    if (N == 0) {
        for (i = 0; i < cnt1 + cnt2; i++)
            if (i == idx) {
                for (j = 0; j < cnt2; j++)
                    str1[i++] = str2[j];
                break;
            }
    }
    else {
        for (i=0;i<cnt1+cnt2;i++)
            if (i == idx) {
                for (j = cnt2 - 1; j >= 0; j--)
                    str1[i++] = str2[j];
                break;
            }
    }
    str1[cnt1 + cnt2] = '\0';
    printf("%s\n", str1);
  */
}

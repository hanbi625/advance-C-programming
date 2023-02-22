#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, cnt1 = 0, cnt2 = 0;
    int flag = 0;

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    for (i = 0; str1[i]; i++)
        cnt1++;
    for (i = 0; str2[i]; i++)
        cnt2++;
    printf("%d ", cnt1);
    for (i = 0; str1[i]; i++) {
        if (str1[i] == str2[i])
            flag++;
    }
    if (flag == cnt1)
        printf("1");
    else
        printf("0");
    /*
    char str1[100], str2[100];
    int i = 0, cnt = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[i])
        i++;
    printf("%d ", i);
    for (int j = 0; str1[j]; j++) {
        if (str1[j] == str2[j])
            cnt++;
    }
    if (i == cnt)
        printf("1");
    else
        printf("0");
    */
    return 0;
}

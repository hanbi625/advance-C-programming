#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check(char* str);
int main() {
    char str[30];
    int che;
    
    scanf("%s", str);
    printf("%d ", strlen(str));
    che = check(str);
    printf("%d", che);

    return 0;
}
int check(char* str) {
    int i = 0, j = 0;
    int len = 0;
    int flag;

    len = strlen(str);

    flag = 1;
    for (i = 0, j = len - 1; i < (len / 2); i++, j--)
        if (str[i] != str[j])
            flag = 0;
    if (flag == 1)
        return 1;
    return 0;
}

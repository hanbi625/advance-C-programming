#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str[21];
    int i;

    scanf("%s", str);
    for (i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i]);

    return 0;
}

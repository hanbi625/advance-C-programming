#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str[101], tmp;
	int i, j, len = 0;

	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		printf("%s\n", str);
		for (j = 0; j < len - 1; j++) {
			tmp = str[j];
			str[j] = str[j + 1];
			str[j + 1] = tmp;
		}
	}
	/*
	char str[100], ch;
    int i, j, cnt = 0;

    scanf("%s", str);
    for (i = 0; str[i]; i++)
        cnt++;
    for (i = 0; i < cnt; i++) {
        printf("%s\n", str);
        ch = str[0];
        for (j = 0; j < cnt - 1; j++)
            str[j] = str[j + 1];
        str[cnt - 1] = ch;
    }
	*/
	return 0;
}

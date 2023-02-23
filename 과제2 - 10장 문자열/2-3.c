#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str[101] = { 0 }, p[10][101] = { 0 }, * q, tmp[101] = { 0 };
	int i, idx = 0, len = 0;

	gets(str);
	len = strlen(str);
	q = str;
	for (i = 0; i <= len; i++)
		if (str[i] == ' ' || str[i] == '\0') {
			str[i] = '\0';
			strcpy(p[idx], q);
			idx++;
			q = str + i + 1;
		}

	for (i = 0; i < idx; i++)
		puts(p[i]);

	q = p[0];
	for (i = 0; i < idx; i++)
		if (strcmp(q, p[i]) > 0)
			q = p[i];

	puts(q);


	return 0;
}
/* strcpy 함수 안쓰고..
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000] = { '\0' }, word[10][100] = { '\0' }, tmp[100];
    int k=0, len = 0, i = 0, j = 0, cnt = 0;

    gets(str);
    len = strlen(str);

    for (k = 0; k <= len;k++) {
        if (str[k] == ' '||str[k]=='\0') {
            word[i][j] = '\0';
            i++;
            cnt++;
            j = 0;
        }
        else {
            word[i][j] = str[k];
            j++;
        }
    }
    for (i = 0; i < cnt; i++)
        puts(word[i]);
    strcpy(tmp, word[0]);
    for (i = 1; i < cnt; i++) {
        if (strcmp(tmp, word[i]) > 0)
            strcpy(tmp, word[i]);
    }
    puts(tmp);

    return 0;
}
*/

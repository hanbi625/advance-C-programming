#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str1[101] = { 0 }, str2[101] = { 0 };
	int i, len1 = 0, len2 = 0;
	int cnt = 0;

	gets(str1);
	len1 = strlen(str1);
	gets(str2);
	len2 = strlen(str2);

	for (i = 0; i <= len1 - len2; i++) {
		if (strncmp(str1 + i, str2, len2) == 0) {
			cnt++;
			i += len2 - 1;
		}
	}
	printf("%d", cnt);

	return 0;
}

/* strncmp 안 쓰는 법
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int len1, len2, cnt = 0, count = 0;

    gets(str1);
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            cnt = 0;
            if (str1[i] == str2[j])
                for (int k = 0; k < len2; k++)
                    if (str1[i + k] == str2[j + k])
                        cnt++;
            if (cnt == len2) {
                count++;
                if (len2 > 1)
                    i += (len2 - 1);
                break;
            }
        }

    }
    printf("%d", count);

    return 0;
}
*/

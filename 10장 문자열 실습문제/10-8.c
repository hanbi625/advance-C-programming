#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[101], b[101];
	int i;

	scanf("%s", a);
	getchar();
	scanf("%s", b);
	if (strcmp(a, b) > 0) {
		strcat(a, b);
		printf("%s\n", a);
	}
	else {
		strcat(b, a);
		printf("%s\n", b);
	}

	return 0;
}
/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str1[51] = { 0 }, str2[51] = { 0 };

    scanf("%s", str1);
    getchar();
    scanf("%s", str2);

    if (strcmp(str1, str2) > 0)
        printf("%s%s", str1, str2);
    else
        printf("%s%s", str2, str1);

    return 0;
}
*/

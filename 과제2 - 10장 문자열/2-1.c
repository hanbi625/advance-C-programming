#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str[101], tmp;
	int i, j, len = 0;

	scanf("%s", str);
	len = strlen(str);

	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1; j++)
			if (strcmp(&str[j], &str[j + 1]) > 0) {
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
	}
	printf("%s", str);

	return 0;
}

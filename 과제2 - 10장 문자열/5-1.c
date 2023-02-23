#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str[1001], *p[100], *tmp;
	int i, idx = 0, j, K;

	gets(str);
	scanf("%d", &K);

	p[0] = str;
	idx = 1;
	for (i = 0; str[i]; i++) {
		if (str[i] == ' ') {
			str[i] = '\0';
			p[idx] = &str[i + 1];
			idx++;
		}
	}
	for (i = 0; i < idx - 1; i++)
		for (j = 0; j < idx - 1; j++) {
			if (strlen(p[j]) < strlen(p[j + 1])) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
			if (strlen(p[j]) == strlen(p[j + 1]))
				if (strcmp(p[j], p[j + 1]) > 0) {
					tmp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = tmp;
				}
		}
	printf("%s", p[K - 1]);

	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char str[101] = { 0 }, ** p = NULL, * q = NULL, * tmp;
	int i, word = 0, len = 0, j = 0, idx = 0;
	int l = 0;

	gets(str);
	l = strlen(str);
	for (i = 0; str[i]; i++)
		if (str[i] == ' ')
			word++;
	p = (char**)malloc((word + 1) * sizeof(char*));
	if (p == NULL)	return -1;

	idx = 0;
	q = str;
	for (i = 0; i <= l; i++) {
		len++;
		if (str[i] == ' ' || str[i] == '\0') {
			str[i] = '\0';
			p[idx] = (char*)malloc(len * sizeof(char));
			if (p[idx] == NULL)	return -1;
			strcpy(p[idx], q);
			idx++;
			q = str + i + 1;
			len = 0;
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
	for (i = 0; i < idx; i++)
		printf("%s\n", p[i]);

	for (i = 0; i < idx; i++)
		free(p[i]);
	free(p);
	p = NULL;

	return 0;
}

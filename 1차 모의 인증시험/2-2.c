#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char temp[101] = { 0 }, *p[101] = { 0 }, *tmp;
	int N, i, j, len = 0, idx;

	gets(temp);
	scanf("%d", &N);
	len = strlen(temp);

	p[0] = temp;
	idx = 1;
	for (i = 0; i < len; i++)
		if (temp[i] == ' ') {
			temp[i] = '\0';
			p[idx] = &temp[i + 1];
			idx++;
		}
	printf("%s\n", p[N - 1]);
	for (i = 0; i < idx - 1; i++)
		for (j = 0; j < idx - 1; j++)
			if (strcmp(p[j], p[j + 1]) > 0) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
	printf("%s\n", p[0]);

	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct str {
	char* st;
	int num;
} STR;
int main() {
	STR* p = NULL, tmp;
	char temp[101] = { 0 };
	int N, i, j, len = 0;

	scanf("%d", &N);
	getchar();
	p = (STR*)malloc(N * sizeof(STR));
	if (p == NULL)
		return -1;

	for (i = 0; i < N; i++) {
		gets(temp);
		len = strlen(temp);
		p[i].st = (char*)malloc((len + 1) * sizeof(char));
		if (p[i].st == NULL)
			return -1;
		strcpy(p[i].st, temp);
		p[i].num = len;
	}

	for (i = 0; i < N - 1; i++)
		for (j = 0; j < N - 1; j++)
			if (p[j].num < p[j + 1].num) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}

	for (i = 0; i < N; i++)
		printf("%s %d\n", p[i].st, p[i].num);
	for (i = 0; i < N; i++)
		free(p[i].st);
	free(p);
	p = NULL;

	return 0;
}

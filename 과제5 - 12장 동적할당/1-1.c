#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct st {
	char* str;
	int cnt1, cnt2;
} st;
int main() {
	st* p = NULL, tmp;
	char temp[101] = { 0 };
	int N, i, len = 0, j;

	scanf("%d", &N);
	getchar();
	p = (st*)malloc(N * sizeof(st));
	if (p == NULL)
		return -1;
	for (i = 0; i < N; i++) {
		scanf("%s", temp);
		getchar();
		len = strlen(temp);
		p[i].str = (char*)malloc((len + 1) * sizeof(char));
		if (p[i].str == NULL)
			return -1;
		strcpy(p[i].str, temp);
		p[i].cnt1 = p[i].cnt2 = 0;
		for (j = 0; j < len; j++) {
			if (p[i].str[j] == 'a' || p[i].str[j] == 'e' || p[i].str[j] == 'i' ||
				p[i].str[j] == 'o' || p[i].str[j] == 'u' || p[i].str[j] == 'A' || p[i].str[j] == 'E' ||
				p[i].str[j] == 'I' || p[i].str[j] == 'O' || p[i].str[j] == 'U')
				p[i].cnt2++;
			else
				p[i].cnt1++;
		}
	}
	for (i = 0; i < N - 1; i++) 
		for (j = 0; j < N - 1; j++) {
			if (p[j].cnt1 < p[j + 1].cnt1) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
			if (p[j].cnt1 == p[j + 1].cnt1) {
				if (p[j].cnt2 < p[j + 1].cnt2) {
					tmp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = tmp;
				}
			}
		}
	for (i = 0; i < N; i++)
		printf("%s\n", p[i].str);
	for (i = 0; i < N; i++)
		free(p[i].str);
	free(p);
	

	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char** p = NULL, temp[101], * tmp;
	int N, i, j, len = 0;

	scanf("%d", &N);
	getchar();
	p = (char**)malloc(N * sizeof(char*));
	if (p == NULL)
		return -1;

	for (i = 0; i < N; i++) {
		scanf("%s", temp);
		getchar();
		len = strlen(temp);
		p[i] = (char*)malloc((len + 1) * sizeof(char));
		if (p[i] == NULL)
			return -1;
		strcpy(p[i], temp);
	}

	for (i = 0; i < N - 1; i++)
		for (j = 0; j < N - 1; j++)
			if (strcmp(p[j], p[j + 1]) > 0) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
	for (i = 0; i < N; i++)
		printf("%s\n", p[i]);
	for (i = 0; i < N; i++)
		free(p[i]);
	free(p);
	p = NULL;

	return 0;
}
/* 구조체 사용한 코드
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct str {
    char *st;
} str;
int main() {
    str *p = NULL, *tmp;
    int N, i, len = 0, j;
    char temp[100];

    scanf("%d", &N);
    getchar();
    p = (str*)malloc(N * sizeof(str));
    if (p == NULL)
        return -1;
    for (i = 0; i < N; i++) {
        scanf("%s", temp);
        getchar();
        len = strlen(temp);
        p[i].st = (char*)malloc((len + 1) * sizeof(char));
        if (p[i].st == NULL)
            return -1;
        strcpy(p[i].st, temp);
    }
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1; j++)
            if (strcmp(p[j].st, p[j + 1].st) > 0) {
                tmp = p[j].st;
                p[j].st = p[j + 1].st;
                p[j + 1].st = tmp;
            }
    for (i = 0; i < N; i++)
        printf("%s\n", p[i].st);
    for (i = 0; i < N; i++)
        free(p[i].st);
    free(p);


    return 0;
}
*/

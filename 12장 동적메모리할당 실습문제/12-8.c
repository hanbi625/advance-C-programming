#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char **p = NULL, temp[101], *min;
	int N, i, j, len = 0;

	scanf("%d", &N);
	getchar();
	p = (char**)malloc(N * sizeof(char*));
	if (p == NULL)
		return -1;

	for (i = 0; i < N; i++) {
		gets(temp);
		len = strlen(temp);
		p[i] = (char*)malloc((len + 1) * sizeof(char));
		if (p[i] == NULL)
			return -1;
		strcpy(p[i], temp);
	}

	min = p[0];
	for (i = 1; i < N; i++)
		if (strlen(min) > strlen(p[i]))
			min = p[i];
	printf("%s", min);
	
	for (i = 0; i < N; i++)
		free(p[i]);
	free(p);
	p = NULL;

	return 0;
}

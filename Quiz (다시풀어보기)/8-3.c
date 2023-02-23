#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char temp[101], **p = NULL, *max, *min;
	char* maa, *mii, *q, *r;
	int N, i, j, m = 0;

	scanf("%d", &N);
	getchar();
	p = (char**)malloc(N * sizeof(char*));
	if (p == NULL)	return -1;

	for (i = 0; i < N; i++) {
		gets(temp);
		p[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char));
		if (p[i] == NULL)	return -1;
		strcpy(p[i], temp);
	}
	max = p[0];
	min = p[0];
	for (i = 1; i < N; i++) {
		if (strlen(max) < strlen(p[i]))
			max = p[i];
		if (strlen(min) > strlen(p[i]))
			min = p[i];
	}
	
	mii = min;
	m = strlen(min);
	for (q = min, r = min; q <= min + m; q++) {
		if (*q == ' ' || *q == '\0') {
			*q = '\0';
			if (strlen(mii) > strlen(r))
				mii = r;
			r = q + 1;
		}
	}
	maa = max;
	m = strlen(max);
	for (q = max, r = max; q <= max + m; q++) {
		if (*q == ' ' || *q == '\0') {
			*q = '\0';
			if (strlen(maa) < strlen(r))
				maa = r;
			r = q + 1;
		}
	}
	printf("%s\n%s", mii, maa);
	for (i = 0; i < N; i++)
		free(p[i]);
	free(p);
	p = NULL;
  
	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct tourcity {
	char name[21];
	int cost;
	char iob, date[9], city[21];
}tour;
int main() {
	tour **p = NULL, tmp;
	char **c = NULL, temp[21];
	int N, *M = NULL;
	int i, j, k, len = 0;

	scanf("%d", &N);
	getchar();
	p = (tour**)malloc(N * sizeof(tour));
	if (p == NULL) {
		printf("Not Enough Memory.\n");
		return -1;
	}
	c = (char**)malloc(N * sizeof(char*));
	if (c == NULL)	return -1;
	M = (int*)malloc(N * sizeof(int));
	if (M == NULL)	return -1;

	for (i = 0; i < N; i++) {
		scanf("%s", temp);
		len = strlen(temp);
		c[i] = (char*)malloc((len + 1) * sizeof(char));
		if (c[i] == NULL)	return -1;
		strcpy(c[i], temp);
	}
	for (i = 0; i < N; i++)
		scanf("%d", &M[i]);
	getchar();
	for (i = 0; i < N; i++) {
		p[i] = (tour*)malloc(M[i] * sizeof(tour));
		if (p[i] == NULL) {
			printf("Not Enough Memory.\n");
			return -1;
		}
		for (j = 0; j < M[i]; j++) {
			scanf("%s %d %c %s", p[i][j].name, &p[i][j].cost, &p[i][j].iob, p[i][j].date);
			getchar();
			strcpy(p[i][j].city, c[i]);
		}
	}
	tmp = p[0][0];
	for (i = 0; i < N; i++)
		for (j = 0; j < M[i]; j++) {
			if (tmp.cost < p[i][j].cost)
				tmp = p[i][j];
			if (tmp.cost == p[i][j].cost)
				if (strcmp(tmp.date, p[i][j].date) > 0)
					tmp = p[i][j];
		}
	printf("%s %s %d %s %c", tmp.city, tmp.name, tmp.cost, tmp.date, tmp.iob);
	for (i = 0; i < N; i++) {
		free(c[i]);
		free(p[i]);
	}
	free(c);
	free(p);
	free(M);
	
	return 0;
}

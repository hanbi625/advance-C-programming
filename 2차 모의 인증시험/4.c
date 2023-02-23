#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct result {
	int id, test1, test2;
	double score;
} RES;
int main() {
	RES *p = NULL, *q = NULL, tmp;
	int N, i, j, n, cut, a;

	scanf("%d", &N);
	p = (RES*)malloc(N * sizeof(RES));
	if (p == NULL)
		return -1;
	q = (RES*)malloc(N * sizeof(RES));
	if (q == NULL)
		return -1;

	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &p[i].id, &p[i].test1, &p[i].test2);
		p[i].score = p[i].test1 * 0.4 + p[i].test2 * 0.6;
	}
	for (i = 0; i < N - 1; i++) 
		for (j = 0; j < N - 1; j++) 
			if (p[j].score < p[j + 1].score) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		
	
	cut = N * 0.6;
	for (i = 0; i < cut; i++)
		q[i] = p[i];
	while (i < N && p[i].score == p[i - 1].score) {
		q[i] = p[i];
		i++;
	}
	a = i;

	for (i = a; i < N - 1; i++)
		for (j = a; j < N - 1; j++)
			if (p[j].test2 < p[j + 1].test2) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
	cut = N * 0.8;
	for (i = a; i < cut; i++)
		q[i] = p[i];
	while (i < N && p[i].test2 == p[i - 1].test2) {
		q[i] = p[i];
		i++;
	}
	n = i;
	for (i = 0; i < n - 1; i++) 
		for (j = 0; j < n - 1; j++)
			if (q[j].id > q[j + 1].id) {
				tmp = q[j];
				q[j] = q[j + 1];
				q[j + 1] = tmp;
			}
	for (i = 0; i < n; i++)
		printf("%d\n", q[i].id);

	free(p);
	free(q);

	return 0;
}

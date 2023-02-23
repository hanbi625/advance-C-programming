#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input(int* p, int M);
int* sel_max(int* p, int M);
void output(int* p, int M);
int main(void) {
	int in[100], out[100], * max, i, N, M;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		input(in, M);
		max = sel_max(in, M);
		out[i] = *max;
	}
	output(out, N);
	return 0;
}
void input(int* p, int M) {
	int* i;
	for (i = p; i < p + M; i++)
		scanf("%d", i);
}
int* sel_max(int* p, int M) {
	int* i, * j, * max;
	int cnt = 0, m = 0;

	max = p;
	for (i = p; i < p + M; i++) {
		cnt = 0;
		for (j = i; j < p + M; j++)
			if (*i == *j)
				cnt++;
		if (m < cnt) {
			m = cnt;
			max = i;
		}
	}
	return max;
}
void output(int* p, int M) {
	int* i;
	for (i = p; i < p + M; i++)
		printf(" %d", *i);
}

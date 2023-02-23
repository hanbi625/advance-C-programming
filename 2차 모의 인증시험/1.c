#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input(int* p, int N);
void output(int* p, int K);
int main() {
	int X[101] = { 0 }, Y[101] = { 0 };
	int M, N, K, k1 = 0, k2 = 0, n;

	scanf("%d %d", &M, &N);
	input(X, M);
	input(Y, N);
	scanf("%d", &K);

	n = (M + N) / K;
	while (n) {
		if (k1 < M) {
			output(X + k1, K);
			k1 += K;
		}
		if (k2 < N) {
			output(Y + k2, K);
			k2 += K;
		}
		n--;
	}
	return 0;
}
void input(int* p, int N) {
	int* i;
	for (i = p; i < p + N; i++)
		scanf("%d", i);
}
void output(int* p, int K) {
	int* i;
	for (i = p; i < p + K; i++)
		printf(" %d", *i);
}

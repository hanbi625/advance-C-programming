#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double factorial(int N);
int main() {
	int N;
	double sum = 1;

	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		sum += (1.0) / factorial(i);
	printf("%.6f", sum);

	return 0;
}
double factorial(int N) {
	if (N == 1) return 1;
	else
		return factorial(N - 1) * N;
}

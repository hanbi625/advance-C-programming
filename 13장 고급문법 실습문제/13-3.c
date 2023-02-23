#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Fibonacci(int N);
int main() {
	int N;

	scanf("%d", &N);
	printf("%d", Fibonacci(N));

	return 0;
}
int Fibonacci(int N) {
	if (N == 0) return 0;
	else if (N == 1) return 1;
	else return Fibonacci(N - 1) + Fibonacci(N - 2);
}

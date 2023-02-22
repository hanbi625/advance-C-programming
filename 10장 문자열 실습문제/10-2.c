#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int N, i;
	char x[10] = { 0 };

	scanf("%d", &N);
	i = 0;
	while (N) {
		x[i++] = N % 10 + '0';
		N /= 10;
	}
	printf("%s\n", x);

	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char A[101] = { 0 }, B[101] = { 0 };
	int N, i, j = 0, k, num = 0;

	scanf("%s", A);
	scanf("%d", &N);
	for (i = 0; A[i]; i++) {
		if (A[i] >= 'a' && A[i] <= 'z')
			B[j++] = A[i] - N;
		else if (A[i] >= 'A' && A[i] <= 'Z')
			B[j++] = A[i] + N;
		else if (A[i] > '0' && A[i] <= '9') {
			if (A[i] == '1' && (A[i + 1] >= '0' && A[i + 1] <= '9')) {
				num = (A[i] - '0') * 10 + A[i + 1] - '0';
				for (k = 0; k < N; k++)
					B[j++] = num + 'A' - 1;
				i++;
			}
			else if (A[i] == '2' && (A[i + 1] >= '0' && A[i + 1] <= '6')) {
				num = (A[i] - '0') * 10 + A[i + 1] - '0';
				for (k = 0; k < N; k++)
					B[j++] = num + 'A' - 1;
				i++;
			}
			else {
				num = num * 10 + (A[i] - '0');
				for (k = 0; k < N; k++)
					B[j++] = num + 'A' - 1;
			}
			num = 0;
		}
		else
			B[j++] = ' ';
	}
	B[j] = '\0';
	printf("%s\n", B);

	return 0;
}

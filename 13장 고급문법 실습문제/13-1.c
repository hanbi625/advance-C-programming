#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int digit(int N, int M);
int main() {
	int N, M;

	scanf("%d %d", &N, &M);
	if (N > M) printf("%d", digit(N, M));
	else printf("%d", digit(M, N));

	return 0;
}
int digit(int N, int M) {
	if (N == M) return N;
	else {
		if (N - M > M)
			digit(N - M, M);
		else digit(M, N - M);
	}
}
/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int gcd(int a, int b);
int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));

    return 0;
}
int gcd(int a, int b) {
    int tmp;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (b == 0) return a;
    else return gcd(b, a % b);
}
*/

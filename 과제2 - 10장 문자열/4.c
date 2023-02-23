#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int s_check(char* p, char* q);
int main() {
	char x[10][201];
	int M, K1, K2, i, cnt = 0;

	scanf("%d", &M);
	scanf("%d %d", &K1, &K2);
	getchar();
	for (i = 0; i < M; i++) {
		gets(x[i]);
		cnt = s_check(&x[i][K1], &x[i][K2]);
		if (cnt > 0)
			printf("%d\n", cnt);
	}

	return 0;
}
int s_check(char* p, char* q) {
	char* i;
	int cnt = 0;

	for (i = p; i <= q; i++)
		if (*i >= 'a' && *i <= 'z')
			cnt++;

	return cnt;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char x[20], * p;
	int cnt = 0;
	for (p = x;; p++) {
		scanf("%c", p);
		if (*p == '#')	break;
		cnt++;
	}
	for (p = x + cnt - 1; p >= x; p--)
		printf("%c", *p);

	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char temp[101] = { 0 }, *p[101] = { 0 };
	int N, i, len = 0, idx;

	gets(temp);
	scanf("%d", &N);
	len = strlen(temp);
	p[0] = temp;
	idx = 1;
	for (i = 0; i <= len; i++) {
		if (temp[i] == ' ' || temp[i] == '\0') {
			temp[i] = '\0';
			p[idx] = &temp[i + 1];
			idx++;
		}
	}
	printf("%s\n", p[N - 1]);

	return 0;
}

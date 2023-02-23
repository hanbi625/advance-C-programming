#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int a, b, c, d;
	unsigned int num = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	num = d;
	num = c << 8 | num;
	num = b << 16 | num;
	num = a << 24 | num;

	printf("%d", num);

	return 0;
}

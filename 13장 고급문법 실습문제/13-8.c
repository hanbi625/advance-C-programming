#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int add(int, int);
int sub(int, int);
int multiply(int, int);
int main() {
	int (*handle[3]) (int, int) = { add, sub, multiply };
	int x, y, i;

	scanf("%d %d", &x, &y);

	for (i = 0; i < 3; i++)
		printf("%d ", handle[i](x, y));

	return 0;
}
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}

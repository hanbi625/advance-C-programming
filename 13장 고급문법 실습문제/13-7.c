#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int add(int, int);
int main() {
	int A, x, y;
	int (*fp)(int, int);
	void *p;

	fp = add;
	scanf("%d", &A);
	p = &A;
	scanf("%d %d", &x, &y);
	printf("%d\n", *(int *)p);
	printf("%d\n", fp(x, y));	

	return 0;
}
int add(int a, int b) {
	return a + b;
}

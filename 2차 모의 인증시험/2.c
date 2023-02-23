#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct complex {
	double real, imag, abs;
};
struct complex add(struct complex a, struct complex b);
struct complex sub(struct complex a, struct complex b);
void abs_val(struct complex* p1, struct complex* p2, struct complex* p3);
int main() {
	struct complex a, b, c, ad, su;
	struct complex* A, * B, * C;

	scanf("%lf %lf", &a.real, &a.imag);
	scanf("%lf %lf", &b.real, &b.imag);
	scanf("%lf %lf", &c.real, &c.imag);

	abs_val(&a, &b, &c);
	ad = add(a, b);
	su = sub(a, b);
	printf("%.1f%+.1fi\n", ad.real, ad.imag);
	printf("%.1f%+.1fi\n", su.real, su.imag);

	return 0;
}
struct complex add(struct complex a, struct complex b) {
	struct complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}
struct complex sub(struct complex a, struct complex b) {
	struct complex c;
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;
	return c;
}
void abs_val(struct complex* p1, struct complex* p2, struct complex* p3) {
	struct complex max, min;

	p1->abs = p1->real * p1->real + p1->imag * p1->imag;
	p2->abs = p2->real * p2->real + p2->imag * p2->imag;
	p3->abs = p3->real * p3->real + p3->imag * p3->imag;

	max = min = *p1;

	if (max.abs < p2->abs) max = *p2;
	else if (min.abs > p2->abs) min = *p2;

	if (max.abs < p3->abs) max = *p3;
	else if (min.abs > p3->abs) min = *p3;

	*p1 = max;
	*p2 = min;
}

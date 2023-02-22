#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int mid(int x[]);
int main() {
	int x[3];
	int* p;

	for (p = x; p < x + 3; p++)
		scanf("%d", p);
	printf("%d", mid(x));
	
	return 0;
}
int mid(int x[]) {
	int* p;
	p = x;
	if ((*p >= *(p + 1) && *p <= *(p + 2)) || (*p >= *(p + 2) && *p <= *(p + 1)))
		return *p;
	else if ((*(p + 1) >= *p && *(p + 1) <= *(p + 2)) || (*(p + 1) >= *(p + 2) && *(p + 1) <= *p))
		return *(p + 1);
	else
		return *(p + 2);

}
/*
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int* mid(int a[]);
int main() {
    int x[3];
    int* p, * m;

    for (p = x; p < x + 3; p++)
        scanf("%d", p);
    m = mid(x);

    printf("%d", *m);

    return 0;
}
int* mid(int a[]) {
    int* p, * q;
    int tmp;

    for (p = a; p < a + 2; p++) {
        for (q = a; q < a + 2; q++)
            if (*q > *(q + 1)) {
                tmp = *q;
                *q = *(q + 1);
                *(q + 1) = tmp;
            }
    }
    p = a;
    return p + 1;
}
*/

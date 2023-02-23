#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int* MAX(int* ar);
int* MIN(int* ar);
int main() {
	int N, ar[100] = { 0 };
	int j, * i;

	scanf("%d", &N);
	for (j = 0; j < N; j++) {
		for (i = ar;; i++) {
			scanf("%d", i);
			if (*i == 0)
				break;
		}
		printf("%d %d\n", *MAX(ar), *MIN(ar));
	}

	return 0;
}
int* MAX(int ar[]) {
    int* p;
    int* max;
    max = ar;
    for (p = ar; *p != 0; p++)
        if (*p > *max)
            max = p;
    return max;

}
int* MIN(int ar[]) {
    int* p;
    int* min;

    min = ar;
    for (p = ar; *p != 0; p++)
        if (*p < *min)
            min = p;
    return min;
}

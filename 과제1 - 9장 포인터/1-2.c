#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int* MAX(int* ar);
int* MIN(int* ar);
int main() {
	int N, ar[100] = { 0 };
	int j, * i, * min = NULL, * max = NULL, * p;
	int flag = 0;

	scanf("%d", &N);
	for (j = 0; j < N; j++) {
		for (i = ar;; i++) {
			scanf("%d", i);
			if (*i == 0)
				break;
		}
		max = MAX(ar);
		min = MIN(ar);
		if (max > min) {
			if (min + 1 == max)
				printf("none\n");
			else {
				for (p = min + 1; p < max; p++)
					printf("%d ", *p);
				printf("\n");
			}
		}
		else if (min > max) {
			if (max + 1 == min)
				printf("none\n");
			else {
				for (p = max + 1; p < min; p++)
					printf("%d ", *p);
				printf("\n");
			}
		}
		else
			printf("none\n");
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

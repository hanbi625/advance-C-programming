#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ABS(a) ((a) > (0) ? (a) : (-a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main() {
	int x[6] = { 0 }, i;
	int max, maxi = 0;

	for (i = 0; i < 6; i++) 
		scanf("%d", &x[i]);
	
	
	max = ABS(x[0]);
	for (i = 1; i < 6; i++)
		max = MAX(max, ABS(x[i]));
	for (i = 0; i < 6; i++)
		maxi = max == ABS(x[i]) ? i : maxi;
	
	printf("%d %d", x[maxi], max);

	return 0;
}

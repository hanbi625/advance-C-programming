#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    int arr[5], rank[5] = { 0 };
    int* p, * q, * r;

    for (p = arr; p < arr + 5; p++)
        scanf("%d", p);

    for (p = arr, r = rank; p < arr + 5; p++, r++) {
        for (q = arr; q < arr + 5; q++)
            if (*p < *q)
                (*r)++;
    }
    for (p = arr, r = rank; p < arr + 5; p++, r++)
        printf("%d=r%d ", *p, (*r) + 1);

    return 0;
}

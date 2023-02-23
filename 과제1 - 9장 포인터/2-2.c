#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int passengerN(int n);
void rebooking(int* ar);
int changeseat(int* ar);
int main() {
    int x[21], N;
    int* p;

    scanf("%d", &N);
    for (p = x; p < x + N; p++)
        scanf("%d", p);
    printf("%d\n", passengerN(N));
    if (passengerN(N) == 0) {
        rebooking(x);
        
        for (p = x; p < x + N; p++)
            printf("%d ", *p);
    }

    return 0;
}
int passengerN(int n) {
    if (n < 5)
        return -1;
    else return 0;
}
void rebooking(int* ar) {
    int* p, *q;
    for (p = ar; *p; p++) {
        for (q = p + 1; *q; q++)
            if (*p == *q)
                *q = changeseat(ar);
    }
}
int changeseat(int* ar) {
    int *q, i;
    int flag = 0;
 

    for (i = 1; i < 22; i++) {
        flag = 0;
        for (q = ar; *q; q++)
            if (i == *q)
                flag = 1;
        if (flag == 0)
            return i;
    }
   
    return 0;
}

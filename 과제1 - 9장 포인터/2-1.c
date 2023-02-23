#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {
    int x[21], N;
    int *p, *q, *r, cnt = 0, flag = 0, pass = 0;
    
    scanf("%d", &N);
    for (p = x; p < x + N; p++)
        scanf("%d", p);
    if (N < 5)
        printf("-1");
    else {
        for (p = x; p < x + N; p++) {
            cnt = 0;
            pass = 0;
            for (q = p; q < x + N; q++) {
                if (*p == *q)
                    cnt++;
                for (r = x; r < p; r++)
                    if (*p == *r)
                        pass = 1;
            }
            if (cnt > 1 && pass == 0) {
                printf("%d %d\n", *p, cnt);
                flag = 1;
            }
        }
        if (flag == 0)
            printf("0\n");
    }
    return 0;
}
/*
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int N, x[22] = { 0 };
	int* i, * j, cnt = 0, flag = 0, flag2 = 0;

	scanf("%d", &N);
	for (i = x; i < x + N; i++)
		scanf("%d", i);
	if (N >= 5) {
		for (i = x; i < x + N; i++) {
			cnt = 0;
			flag = 0;
			for (j = x; j < x + N; j++)
				if (*i == *j)
					cnt++;
			for (j = x; j < i; j++)
				if (*i == *j) {
					flag = 1;
					break;
				}
			if (flag == 0 && cnt > 1) {
				printf("%d %d\n", *i, cnt);
				flag2 = 1;
			}
		}
		if (flag2 == 0)
			printf("0\n");
	}
	else
		printf("-1\n");

	return 0;
}
*/

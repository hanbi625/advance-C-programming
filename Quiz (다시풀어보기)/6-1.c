#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    char dep[51], name[21], birth[21];
};
int main() {
    struct student st[100], *p, tmp;
    int N, i, j;

    scanf("%d", &N);
    getchar();
    p = st;
    for (i = 0; i < N; i++) {
        gets((p + i)->dep);
        scanf("%s %s", (p + i)->name, (p + i)->birth);
        getchar();
    }
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1; j++)
            if (strcmp((p + j)->dep, (p + j + 1)->dep) >0) {
                tmp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = tmp;
            }
    for (i = 0; i < N; i++)
        printf("%s %s %s\n", (p + i)->dep, (p + i)->name, (p + i)->birth);
    /*
    computer engineering
Tom 2000/10/15
bio engineering
Sam 2000/02/25
bio engineering
Alice 2000/11/17
computer engineering
Tom 2000/01/03
computer engineering
Jack 2000/09/12*/

    return 0;
}

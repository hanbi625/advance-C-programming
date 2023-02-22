#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void strcopy(char a[], char b[]);
int main() {
    char a[6], b[6];
    char *p;

    for (p = a; p < a + 6; p++)
        scanf("%c", p);
    strcopy(a, b);
    for (p = b; p < b + 6; p++)
        printf("%c", *p);
    return 0;
}
void strcopy(char a[], char b[]) {
    char *p, *q;
    for (p = a, q = b; p < a + 6; p++, q++)
        *q = *p;
  /*
  char* p;
    int i = 0;

    for (p = b; p < b + 6; p++) {
        *p = *(a + i);
        i++;
    }
  */
}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
void convert(char A[], char a[], int N);
int main() {
    char A[100] = { 0 }, B[100] = { 0 };
    char a[100] = { 0 }, b[100] = { 0 };
    int N = 1;
    int cmp1, cmp2;

    gets(A);
    gets(B);

    while (N > 0 && N < 27) {
        convert(A, a, N);
        convert(B, b, N);
        if (strcmp(a, B) == 0 || strcmp(A, b) == 0)
            break;
        N++;
    }
    cmp1 = strcmp(a, B);
    cmp2 = strcmp(A, b);
    if (cmp1 == 0 && cmp2 != 0)
        printf("1");
    if (cmp1 != 0 && cmp2 == 0)
        printf("2");
    if (cmp1 != 0 && cmp2 != 0)
        printf("0");

    return 0;
}
void convert(char A[], char a[], int N) {
    int i, j, n, k;
    k = 0;
    for (i = 0; A[i]; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z')
            a[k++] = A[i] + N;
        else if (A[i] >= 'a' && A[i] <= 'z')
            a[k++] = A[i] - N;
        else if (A[i] > '0' && A[i] <= '9') {
            if (A[i] == '1' && (A[i + 1] >= '0' && A[i + 1] <= '9')) {
                n = (A[i] - '0') * 10 + A[i + 1] - '0';
                for (j = 0; j < N; j++)
                    a[k++] = 'A' + n - 1;
                i++;
            }
            else if (A[i] == '2' && (A[i + 1] >= '0' && A[i + 1] <= '6')) {
                n = (A[i] - '0') * 10 + A[i + 1] - '0';
                for (j = 0; j < N; j++)
                    a[k++] = 'A' + n - 1;
                i++;
            }
            else
                for (j = 0; j < N; j++)
                    a[k++] = 'A' + A[i] - '1';
        }
        else
            a[k++] = ' ';
    }


}

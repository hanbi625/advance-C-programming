#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
struct result {
    int high, low;
    char pass;
    int pscore;
    int score;
};
void passorfail(struct result* p);
int main() {
    struct result st;

    scanf("%d %d %d", &st.high, &st.low, &st.pscore);
    passorfail(&st);
    printf("%d %c", st.score, st.pass);

    return 0;
}
void passorfail(struct result* p) {
    p->score = p->high - p->low;
    if (p->score <= p->pscore)
        p->pass = 'P';
    else p->pass = 'F';
}

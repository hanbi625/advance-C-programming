#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
	char dep[51];
	int id;
};
int main() {
	struct student st[100], tmp;
	int N, i, j;

	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		gets(st[i].dep);
		scanf("%d", &st[i].id);
		getchar();
	}

	for (i = 0; i < N - 1; i++)
		for (j = 0; j < N - 1; j++) {
			if (strcmp(st[j].dep, st[j + 1].dep) > 0) {
				tmp = st[j];
				st[j] = st[j + 1];
				st[j + 1] = tmp;
			}
			if (strcmp(st[j].dep, st[j + 1].dep) == 0)
				if (st[j].id > st[j + 1].id) {
					tmp = st[j];
					st[j] = st[j + 1];
					st[j + 1] = tmp;
				}
		}
	for (i = 0; i < N; i++)
		printf("%s %d\n", st[i].dep, st[i].id);


	return 0;
}

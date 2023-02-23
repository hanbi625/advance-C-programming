#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
	char name[10], id[11], credit;
};
int main() {
	struct student st[5];
	char fname[10];
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%s %s %c", st[i].name, st[i].id, &st[i].credit);
		getchar();
	}
	scanf("%s", fname);
	for (i = 0; i < 5; i++) {
		if (strcmp(st[i].name, fname) == 0)
			printf(" %s %c", st[i].id, st[i].credit);
	}

	return 0;
}

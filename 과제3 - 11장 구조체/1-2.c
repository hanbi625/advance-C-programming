#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
	char name[10], id[11], credit;
};
int main() {
	struct student st[5];
	char fname[10] = { 0 }, year[5] = { 0 };
	int i, fi;

	for (i = 0; i < 5; i++) {
		scanf("%s %s %c", st[i].name, st[i].id, &st[i].credit);
		getchar();
	}
	scanf("%s", fname);

	for (i = 0; i < 5; i++)
		if (strcmp(st[i].name, fname) == 0)
			fi = i;
	strncpy(year, st[fi].id, 4);

	int flag = 0;
	for (i = 0; i < 5; i++) {
		if (i != fi)
			if (strncmp(year, st[i].id, 4) == 0 && st[fi].credit == st[i].credit) {
				printf("%s ", st[i].name);
				flag = 1;
			}

	}
	if (flag == 0)
		printf("0");

	int num = atoi(year);
	printf("\n%d %d", num, num % 131);


	return 0;
}

#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct st {
	char name[10], book[5][20];
	int score[5], cnt, pcnt;
};
int main() {
	struct st st[100];
	char temp[21];
	int N, i, j;

	scanf("%d", &N);
	getchar();

	for (i = 0; i < N; i++) {
		scanf("%s", st[i].name);
		st[i].cnt = st[i].pcnt = 0;
		j = 0;
		scanf("%s", temp);
		while (strcmp(temp, "0") != 0) {
			strcpy(st[i].book[j], temp);
			scanf("%d", &st[i].score[j]);
			st[i].cnt++;
			if (st[i].score[j] >= 50)
				st[i].pcnt++;
			j++;
			getchar();
			scanf("%s", temp);
		}
	}

	for (i = 0; i < N; i++)
		printf("%s %d%%\n", st[i].name, st[i].pcnt * 100 / 5);

	return 0;
}

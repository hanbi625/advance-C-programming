#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct customer {
	char id[5]; char* name; char* phone;
	struct customer* next;
};
int main() {
	struct customer* p = NULL, tmp, * q = NULL;
	int N, i, j;
	char c, name[101] = { 0 }, phone[15] = { 0 };

	scanf("%d", &N);
	getchar();
	p = (struct customer*)malloc(N * sizeof(struct customer));
	if (p == NULL)	return -1;
	for (i = 0; i < N; i++) {
		scanf("%s", name);
		p[i].name = (char*)malloc((strlen(name) + 1) * sizeof(char));
		if (p[i].name == NULL)	return -1;
		strcpy(p[i].name, name);
		scanf("%s", phone);
		getchar();
		p[i].phone = (char*)malloc((strlen(phone) + 1) * sizeof(char));
		if (p[i].phone == NULL)	return -1;
		strcpy(p[i].phone, phone);
		strcpy(p[i].id, phone + 9);
	}
	scanf("%c", &c);
	for (i = 0; i < N; i++) {
		p[i].next = NULL;
		for (j = i + 1; j < N; j++)
			if (p[i].id[3] == p[j].id[3]) {
				p[i].next = &p[j];
				break;
			}
	}
	i = 0;
	for (q = p; q < p + N; q++)
		if (c == q->id[3])
			break;
	for (; q; q = q->next) {
		i++;
		printf("%s %s %d\n", q->name, q->phone, i);
	}
	for (i = 0; i < N; i++) {
		free(p[i].name);
		free(p[i].phone);
	}
	free(p);

	return 0;
}

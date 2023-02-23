#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct customer {
	char id[5]; char* name; char* phone;
}cus;
int main() {
	cus* p = NULL;
	int N, i;
	char fid[5] = { 0 }, name[101] = { 0 }, phone[15] = { 0 };
	
	scanf("%d", &N);
	getchar();
	p = (cus*)malloc(N * sizeof(cus));
	if (p == NULL)	return -1;

	for (i = 0; i < N; i++) {
		scanf("%s", name);
		p[i].name = (char*)malloc((strlen(name) + 1) * sizeof(char));
		if (p[i].name == NULL)	return -1;
		strcpy(p[i].name, name);

		scanf("%s", phone);
		p[i].phone = (char*)malloc((strlen(phone) + 1) * sizeof(char));
		if (p[i].phone == NULL)	return -1;
		strcpy(p[i].phone, phone);
		getchar();

		strcpy(p[i].id, phone + 9);
	}
	scanf("%s", fid);
	for (i = 0; i < N; i++) {
		if (strcmp(fid, p[i].id) == 0)
			printf("%s %s %d", p[i].name, p[i].phone, i + 1);
	}
	for (i = 0; i < N; i++) {
		free(p[i].name);
		free(p[i].phone);
	}
	free(p);

	return 0;
}

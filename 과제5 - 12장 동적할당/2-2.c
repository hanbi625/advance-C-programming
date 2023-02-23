#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char A[101] = { 0 }, B[101] = { 0 };
	char **pa = NULL, **pb = NULL, *q = NULL, *tmp;
	int i, wa = 0, wb = 0, len = 0, j = 0, idxa = 0, idxb = 0;
	int la = 0, lb;

	gets(A);
	gets(B);
	la = strlen(A);
	lb = strlen(B);
	for (i = 0; i <= la; i++)
		if (A[i] == ' ' || A[i] == '\0')
			wa++;
	pa = (char**)malloc(wa * sizeof(char*));
	if (pa == NULL)	return -1;
	for (i = 0; i <= lb; i++)
		if (B[i] == ' ' || B[i] == '\0')
			wb++;
	pb = (char**)malloc(wb * sizeof(char*));
	if (pb == NULL)	return -1;

	idxa = 0;
	q = A;
	len = 0;
	for (i = 0; i <= la; i++) {
		len++;
		if (A[i] == ' ' || A[i] == '\0') {
			A[i] = '\0';
			pa[idxa] = (char*)malloc(len * sizeof(char));
			if (pa[idxa] == NULL)	return -1;
			strcpy(pa[idxa], q);
			idxa++;
			q = A + i + 1;
			len = 0;
		}
	}

	idxb = 0;
	q = B;
	len = 0;
	for (i = 0; i <= lb; i++) {
		len++;
		if (B[i] == ' ' || B[i] == '\0') {
			B[i] = '\0';
			pb[idxb] = (char*)malloc(len * sizeof(char));
			if (pb[idxb] == NULL)	return -1;
			strcpy(pb[idxb], q);
			idxb++;
			q = B + i + 1;
			len = 0;
		}
	}
	for (i = 0; i < idxa - 1; i++)
		for (j = 0; j < idxa - 1; j++) {
			if (strlen(pa[j]) < strlen(pa[j + 1])) {
				tmp = pa[j];
				pa[j] = pa[j + 1];
				pa[j + 1] = tmp;
			}
			if (strlen(pa[j]) == strlen(pa[j + 1]))
				if (strcmp(pa[j], pa[j + 1]) > 0) {
					tmp = pa[j];
					pa[j] = pa[j + 1];
					pa[j + 1] = tmp;
				}
		}
	for (i = 0; i < idxb - 1; i++)
		for (j = 0; j < idxb - 1; j++) {
			if (strlen(pb[j]) < strlen(pb[j + 1])) {
				tmp = pb[j];
				pb[j] = pb[j + 1];
				pb[j + 1] = tmp;
			}
			if (strlen(pb[j]) == strlen(pb[j + 1]))
				if (strcmp(pb[j], pb[j + 1]) > 0) {
					tmp = pb[j];
					pb[j] = pb[j + 1];
					pb[j + 1] = tmp;
				}
		}
	for (i = 0; i < idxa; i++) {
		int flag = 0;
		for (j = 0; j < idxb; j++)
			if (strcmp(pa[i], pb[j]) == 0) {
				flag = 1;
				break;
			}
		if (flag == 1)
			printf("%s\n", pa[i]);
	}
	for (i = 0; i < idxa; i++)
		free(pa[i]);
	free(pa);
	pa = NULL;
	for (i = 0; i < idxb; i++)
		free(pb[i]);
	free(pb);
	pb = NULL;
	

	return 0;
}

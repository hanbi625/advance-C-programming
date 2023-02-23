#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct phone {
	char name[21], phone[20], birth[9];
} st;
int registration(st* st, int i);
void show(st* st, int N);
int delet(st* st, int N);
void find(st* st, int N);
int main() {
	st st[100] = { 0 };
	int input, N = 0;

	N = 0;
	while (1) {
		printf("*****Menu*****\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
		printf("Enter_the_menu_number:");
		scanf("%d", &input);
		if (input == 1) 
			N = registration(st, N);
		if (input == 2)
			show(st, N);
		if (input == 3)
			N = delet(st, N);
		if (input == 4)
			find(st, N);
		if (input == 5)
			break;
	}

	return 0;
}
int registration(st* st, int i) {
	char name[21] = { 0 };
	int j, idx = 0, N;
	int flag = 0;
	N = i;
	if (i >= 100)
		printf("OVERFLOW\n");
	else {
		printf("Name:");
		scanf("%s", name);
		getchar();
		if (i > 0) {
			for (j = 0; j < i; j++)
				if (strcmp(st[j].name, name) < 0)
					idx++;
			for (j = i; j > idx; j--)
				st[j] = st[j - 1];
			strcpy(st[idx].name, name);
			i = idx;
		}
		else
			strcpy(st[i].name, name);
		printf("Phone_number:");
		scanf("%s", st[i].phone);
		getchar();
		printf("Birth:");
		scanf("%s", st[i].birth);
		getchar();
		printf("<<%d>>\n", N + 1);
		
	}
	return N + 1;

}
void show(st* st, int N) {
	int i;
	for (i = 0; i < N; i++)
		printf("%s %s %s\n", st[i].name, st[i].phone, st[i].birth);
}
int delet(st* st, int N) {
	char dname[21] = { 0 };
	int i, j = 0, flag = 0;
	if (N == 0) {
		printf("NO MEMBER\n");
		return 0;
	}
	else {
		printf("Name:");
		scanf("%s", dname);
		for (i = 0; i < N; i++) {
			if (strcmp(dname, st[i].name) == 0) {
				j = i;
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			for (i = j + 1; i < N; i++)
				st[i - 1] = st[i];
			N--;
		}
	}
	return N;
	
}
void find(st* st, int N) {
	int i, b, month;

	printf("Birth:");
	scanf("%d", &b);

	for (i = 0; i < N; i++) {
		month = atoi(st[i].birth);
		month %= 10000;
		month /= 100;
		if (b == month)
			printf("%s %s %s\n", st[i].name, st[i].phone, st[i].birth);
	}
}

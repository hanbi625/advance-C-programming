#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct person {
	char* name, * phone, * birth;
	struct person* next;
};
int registration(struct person** list, int cnt, int max) {
	char temp[100] = { 0 };
	struct person *new, *p = NULL, *q = NULL;
	int len = 0;

	if (cnt < max) {
		int i = 0;
		
		new = (struct person*)malloc(sizeof(struct person));

		printf("Name:");
		scanf("%s", temp);
		getchar();
		len = strlen(temp);
		new->name = (char*)malloc((len + 1) * sizeof(char));
		if (new->name == NULL)
			return -1;
		strcpy(new->name, temp);

		printf("Phone_number:");
		scanf("%s", temp);
		getchar();
		len = strlen(temp);
		new->phone = (char*)malloc((len + 1) * sizeof(char));
		if (new->phone == NULL)
			return -1;
		strcpy(new->phone, temp);

		printf("Birth:");
		scanf("%s", temp);
		getchar();
		len = strlen(temp);
		new->birth = (char*)malloc((len + 1) * sizeof(char));
		if (new->birth == NULL)
			return -1;
		strcpy(new->birth, temp);
		new->next = NULL;

		if (cnt == 0)
			(*list) = new;
		else {
			i = 0;
			q = (*list);
			p = (*list);
			while (p != NULL && strcmp(p->name, new->name) < 0) {
				q = p;
				p = p->next;
				i++;

			}
			if (i == 0) {
				new->next = (*list);
				(*list) = new;
			}
			else {
				new->next = p;
				q->next = new;
			}
		}
		

		cnt++;
		printf("<<%d>>\n", cnt);

	}
	else 
		printf("OVERFLOW\n");

	return cnt;
}
void showall(struct person *list, int cnt) {
	int i = 0;
	for (i = 0; i < cnt; i++, list = list->next) {
		printf("%s %s %s\n", list->name, list->phone, list->birth);
	}
}
int delete(struct person **list, int cnt) {
	char dname[100] = { 0 };
	struct person* d_target;
	struct person* pre_target;

	if (cnt == 0) {
		printf("NO MEMBER\n");
		return 0;
	}
	else {
		printf("Name:");
		scanf("%s", dname);
		if (strcmp((*list)->name, dname) == 0) {
			d_target = (*list);
			(*list) = (*list)->next;
			free(d_target);
		}
		else {
			d_target = (*list)->next;
			pre_target = (*list);
			while (d_target != NULL && strcmp(d_target->name, dname) != 0) {
				pre_target = d_target;
				d_target = d_target->next;
			}
			pre_target->next = d_target->next;
			free(d_target);
		}
		cnt--;
	}
	return cnt;
}
void findbirth(struct person* list, int cnt) {
	struct person* p;
	int month, b;

	printf("Birth:");
	scanf("%d", &b);
	for (p = list; p != NULL; p = p->next) {
		month = atoi(p->birth);
		month %= 10000;
		month /= 100;
		if (b == month)
			printf("%s %s %s\n", p->name, p->phone, p->birth);
	}

}
int main(void) { // main 함수는 수정 없이 그대로 사용
	int in, cnt = 0, max;
	struct person* list = NULL;

	printf("Max_num:"); // 불필요한 코드이지만, 삭제하면 안 됨
	scanf("%d", &max); // 불필요한 코드이지만, 삭제하면 안 됨

	while (1) {
		printf("*****Menu*****\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
		printf("Enter_the_menu_number:");
		scanf("%d", &in);
		switch (in) {
		case 1:cnt = registration(&list, cnt, max);
			break;
		case 2: showall(list, cnt);
			break;
		case 3: cnt = delete(&list, cnt);
			break;
		case 4:findbirth(list, cnt);
			break;
		default: break;
		}
		if (!(in > 0 && in < 5))
			break;
	}
	return 0;
}

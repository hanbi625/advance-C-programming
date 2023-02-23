#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct bike_info {
	int id, phone;
	char sd, yn;
	int day, min;
	double cost;
};
void input(struct bike_info* p);
void compute(struct bike_info* p);
void bike_info_sort(struct bike_info* p, int N);
void display(struct bike_info* p, int N);
int main() {
	struct bike_info bike[100], *i;
	int N;

	scanf("%d", &N);
	for (i = bike; i < bike + N; i++) {
		input(i);
		compute(i);
	}
	bike_info_sort(bike, N);
	display(bike, N);
	
	return 0;
}
void input(struct bike_info* p) {
	scanf("%d %d %c", &p->id, &p->phone, &p->sd);
	getchar();
	if (p->sd == 'S')
		scanf("%c %d %d", &p->yn, &p->day, &p->min);
	else if (p->sd == 'D')
		scanf("%d", &p->min);
	
}
void compute(struct bike_info* p) {
	double money = 0;
	int min = 0;

	if (p->sd == 'S') {
		if (p->yn == 'Y') {
			money = 0;
		}
		else {
			if (p->day == 7)
				money = 3000;
			else if (p->day == 30)
				money = 5000;
			else
				money = 15000;
		}
	}
	else
		money = 1000;
	
	if (p->min > 60) {
		min = p->min - 60;
		money += (min / 5) * 200;
	}

	p->cost = money;

}
void bike_info_sort(struct bike_info* p, int N) {
	struct bike_info* i, * j, tmp;
	for (i = p; i < p + N - 1; i++)
		for (j = p; j < p + N - 1; j++) {
			if (j->sd > (j + 1)->sd) {
				tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
			if (j->sd == (j + 1)->sd) {
				if (j->id > (j + 1)->id) {
					tmp = *j;
					*j = *(j + 1);
					*(j + 1) = tmp;
				}
			}
		}
	
}
void display(struct bike_info* p, int N) {
	struct bike_info* i;
	double sumd = 0, sums = 0;
	for (i = p; i < p + N; i++) {
		printf("%d %d %c %d\n", i->id, i->phone, i->sd, (int)(i->cost + 0.5));
		if (i->sd == 'D')
			sumd += i->cost;
		else
			sums += i->cost;
	}
	printf("%d %d %d", (int)sumd, (int)sums, (int)(sumd + sums));
}

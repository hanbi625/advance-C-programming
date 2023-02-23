#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct hotel_info {
	char name[31], yn;
	int rank;
	double rep, dis;
};
int in_hotel_info(struct hotel_info* p);
void out_hotel_info(struct hotel_info* p, int N, int G, double D);
int main() {
	struct hotel_info hotel[100];
	int N, G;
	double D;
	
	N = in_hotel_info(hotel);
	scanf("%d %lf", &G, &D);
	out_hotel_info(hotel, N, G, D);

	return 0;
}
int in_hotel_info(struct hotel_info* p) {
	struct hotel_info* i;
	int N = 0;
	for (i = p;; i++) {
		scanf("%s", i->name);
		if (strcmp(i->name, "0") == 0)
			break;
		scanf("%d %lf %lf %c", &i->rank, &i->rep, &i->dis, &i->yn);
		N++;
		getchar();
		
	}
	return N;
}
void out_hotel_info(struct hotel_info* p, int N, int G, double D) {
	struct hotel_info* i, * j, tmp = { 0 };

	for (i = p; i < p + N - 1; i++)
		for (j = p; j < p + N - 1; j++) {
			if (j->rep < (j + 1)->rep) {
				tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
			if (j->rep == (j + 1)->rep) {
				if (strcmp(j->name, (j + 1)->name) > 0) {
					tmp = *j;
					*j = *(j + 1);
					*(j + 1) = tmp;
				}
			}
		}

	for (i = p; i < p + N; i++)
		if (i->rank >= G && i->dis <= D) {
			printf("%s %d %.1f %.1f %c\n", i->name, i->rank, i->rep, i->dis, i->yn);
		}
}

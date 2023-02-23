#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct bank {
	int id, arrive, service, waiting;
};
void waitingtime(struct bank guest[], int N);
double avgtime(struct bank guest[], int N);
int main() {
	struct bank guest[100];
	int N, i;
	double avg = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d %d %d", &guest[i].id, &guest[i].arrive, &guest[i].service);
	waitingtime(guest, N);
	avg = avgtime(guest, N);
	printf("%.2f", avg);

	return 0;
}
void waitingtime(struct bank guest[], int N) {
	int wait = 0, i;
	for (i = 0; i < N; i++) {
		guest[i].waiting = wait - guest[i].arrive;
		wait += guest[i].service;
	}
}
double avgtime(struct bank guest[], int N) {
	double avg;
	int i, sum = 0;
	for (i = 0; i < N; i++)
		sum += guest[i].waiting;
	avg = (double)sum / N;
	return avg;
}

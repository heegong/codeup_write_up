#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct point {
	int a;
	int b;
};



int swap(int* a, int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;

	return 0;
}


int main() {
	int N;

	scanf("%d", &N);

	struct point* p1 = malloc(sizeof(struct point) * N);
	int i,j;

	int scanf_a, scanf_b;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &scanf_a, &scanf_b);
		p1[i].a = scanf_a;
		p1[i].b = scanf_b;
	}

	// ¹öºí
	int *bu_a, *bu_a_1;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N - 1; j++) {
			if (p1[j].a > p1[j + 1].a) {
				swap(&(p1[j + 1].a), &(p1[j].a));
				swap(&(p1[j + 1].b), &(p1[j].b));
			}
		}
	}



	
	for (i = 0; i < N; i++) {
		printf("%d %d\n", p1[i].a, p1[i].b);
	}

	free(p1);
	return 0;
}

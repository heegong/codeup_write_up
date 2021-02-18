#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct score_name {
	int score;
	char names[64];
};

int swap(int* a, int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	return 0;
}



int main() {
	int first_scanf;
	int second_scanf;
	int i, j;
	scanf("%d %d", &first_scanf, &second_scanf);
	struct score_name *score_name_s = malloc(sizeof(struct score_name) * first_scanf);

	for (i = 0; i < first_scanf; i++) {
		scanf("%s %d", score_name_s[i].names, &score_name_s[i].score);
	}


	//strcpy(score_name_s[0].names, "Jeon");
	//score_name_s[0].score = 95;

	//strcpy(score_name_s[1].names, "Kim");
	//score_name_s[1].score = 59;

	//strcpy(score_name_s[2].names, "Lee");
	//score_name_s[2].score = 90;

	//strcpy(score_name_s[3].names, "Bae");
	//score_name_s[3].score = 100;



	for (i = 0; i < first_scanf; i++) {
		for (j = 0; j < first_scanf-1; j++) {
			if (score_name_s[j].score < score_name_s[j + 1].score) {
				char qu_name[64];
				memcpy(qu_name, score_name_s[j].names,64);
				memcpy(score_name_s[j].names, score_name_s[j+1].names, 64);
				memcpy(score_name_s[j+1].names, qu_name, 64);
				swap(&score_name_s[j].score, &score_name_s[j + 1].score);
			}
		}
	}
	for (i = 0; i < second_scanf; i++) {
		printf("%s\n", score_name_s[i].names);
	}



	free(score_name_s);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    int score[3];
    char name[12];
};


int plus_increase = 0;


int compare(const void* a, const void* b) {
    struct Person *num1 = (struct Person *)a;
    struct Person* num2 = (struct Person *)b;
    if (num1->score[plus_increase] < num2->score[plus_increase])
        return 1;     
    if (num1->score[plus_increase] > num2->score[plus_increase])
        return -1;

    return 0;   
}

int main() {
    char output_name[12];
    int first_scanf;
    int i, j;
    scanf("%d", &first_scanf);
    struct Person* p = malloc(sizeof(struct Person) * first_scanf);

    for (i = 0; i < first_scanf; i++) {
        scanf("%s %d %d %d", p[i].name, &p[i].score[0], &p[i].score[1], &p[i].score[2]);
    }


    qsort(p, first_scanf, sizeof(struct Person), compare);


    strcpy(output_name, p[0].name);
    printf("%s ", output_name);
    for (j = 0; j < 2; j++) {
        plus_increase++;
        qsort(p, first_scanf, sizeof(struct Person), compare);

        for (i = 0; i < first_scanf; i++) {
            if (!strcmp(p[i].name, output_name)) {
                if (i != 0) {
                    if (p[i].score[plus_increase] == p[i - 1].score[plus_increase]) {
                        if (i != 1) {
                            if (p[i-1].score[plus_increase] == p[i - 2].score[plus_increase]) {
                                printf("%d ", i-1);
                                break;
                            }
                        }
                        printf("%d ", i);
                        break;
                    }
                }
                printf("%d ", i + 1);
                break;
            }
        }
    }
     

    free(p);
	return 0;
}

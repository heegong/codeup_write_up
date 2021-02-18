#include <stdio.h>

int main() {
    char male_or_female[3] = "MF";


    char jumin[16];
    scanf("%s", jumin);


    int int_male_or_not = jumin[7] - 0x30;

    if (int_male_or_not > 2) {
        printf("20");
    }
    else {
        printf("19");
    }
    printf("%c%c/%c%c/%c%c ", jumin[0], jumin[1], jumin[2], jumin[3], jumin[4], jumin[5]);

    printf("%c", male_or_female[(int_male_or_not-1)%2]);
    return 0;
}

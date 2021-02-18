#include <stdio.h>

int main() {
    int n;
LABEL1:
    scanf("%d", &n);
    if (n) {
        printf("%d\n", n);
        goto LABEL1;
    }

    return 0;
}

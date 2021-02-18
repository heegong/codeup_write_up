#include <stdio.h>

int main()
{
    int n,y;
    scanf("%d %d", &n, &y);
    printf("%d", n * (1<<y));

    return 0;
}


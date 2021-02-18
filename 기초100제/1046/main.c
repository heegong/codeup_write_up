#include <stdio.h>

int main()
{
    int n,y,z,sum;
    scanf("%d %d %d", &n, &y, &z);
    sum = n+y+z;
    printf("%d\n%.1f", sum, (float)sum/3);

    return 0;
}


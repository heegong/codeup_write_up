#include <stdio.h>

int main()
{
    int n,z;
    scanf("%d %d", &n,&z);
    printf("%d\n%d\n%d\n%d\n%d\n%.2f", n+z, n-z, n*z, n/z, n%z, (float)n/z);

    return 0;
}


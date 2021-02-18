#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (! (a%2))
    	printf("%d\n", a);
    if (! (b%2))
    	printf("%d\n", b);
    if (! (c%2))
    	printf("%d", c);
    return 0;
}


#include <stdio.h>

int main()
{
	char abcd[12]="DDDDCCCBBAA";
    int n;
    scanf("%d", &n);
    printf("%c", abcd[n/10]);

    return 0;
}


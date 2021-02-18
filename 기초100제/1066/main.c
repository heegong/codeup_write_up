#include <stdio.h>

int main()
{
	char even_or_odd[2][5] = {"even","odd"};
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", even_or_odd[a%2]);
    printf("%s\n", even_or_odd[b%2]);
    printf("%s", even_or_odd[c%2]);
    return 0;
}


#include <stdio.h>


int main() {
    long long a;
    int r;
    int n;
    scanf("%lld %d %d", &a, &r, &n);


    int i;
    for (i = 1; i < n; i++)
        a *= r;
    
    printf("%lld", a);

    return 0;
}

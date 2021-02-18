#include <stdio.h>

int main()
{
	long long a;
    int m,d,n,i;
    scanf("%lld %d %d %d", &a,&m,&d,&n);
    for(i=0;i<n-1;i++){
    	a = a*m + d;
	}
	printf("%lld",a);

    return 0;
}


#include <stdio.h>

int main()
{
    int a,d,n,i;
    scanf("%d %d %d", &a,&d,&n);
    for (i=0;i<n-1;i++){
    	a+=d;
	}
    printf("%d", a);

    return 0;
}


#include <stdio.h>

int main()
{
    int n,i;
    scanf("%x", &n);
    for(i=1;i<=0xf;i++){
    	printf("%X*%X=%X\n",n,i,n*i);
	}

    return 0;
}


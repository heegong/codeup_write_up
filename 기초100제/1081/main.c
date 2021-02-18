#include <stdio.h>

int main()
{
    int n,z,i,j;
    scanf("%d %d", &n, &z);
    for(i=1;i<=n;i++){
    	for(j=1;j<=z;j++){
    		printf("%d %d\n",i,j);
		}
	}

    return 0;
}


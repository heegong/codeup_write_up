#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	if (i%3){
			printf("%d ",i);
		}
		else{
			printf("X ");
		}
	}

    return 0;
}


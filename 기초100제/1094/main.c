#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int *array=malloc(n*4);
    for(i=0;i<n;i++){
    	scanf("%d",&array[i]);
	}
	for(i=n-1;i>-1;i--){
		printf("%d ",array[i]);
	}
    free(array);
    return 0;
}


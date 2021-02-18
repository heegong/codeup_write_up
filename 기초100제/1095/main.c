#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i;
	int small_num = 24;
    int *array = malloc(n*4);
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
    	scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++){
		if (!array[i]){
			continue;
		}
		if (small_num >= array[i]){
			small_num = array[i];
		}
	}
	
	printf("%d",small_num);
	
	free(array);
    return 0;
}


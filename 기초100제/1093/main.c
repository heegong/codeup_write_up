#include <stdio.h>

int main()
{
	int count, qu, i;
    int array[23] = {0,};
    scanf("%d", &count);
    for(i=0;i<count;i++){
    	scanf("%d",&qu);
    	array[qu-1]++;
	}
    for(i=0;i<23;i++){
    	printf("%d ",array[i]);
	}

    return 0;
}


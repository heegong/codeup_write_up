#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0){
    	printf("minus\n");
	}
	else{
		printf("plus\n");
	}
	if (n%2){
		printf("odd");
	}
	else{
		printf("even");
	}

    return 0;
}


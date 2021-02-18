#include <stdio.h>

int main()
{
    char n;
    char x = 'a';
    scanf("%c", &n);
    do{
    	printf("%c ",x++);	
	}
	while(n>=x);
    

    return 0;
}


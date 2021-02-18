#include <stdio.h>

int main()
{
    char n;
    while (1){
    	scanf("%c", &n);
    	printf("%c\n",n);
    	if (n=='q')
    		break;
    	scanf("%c", &n);
	}
    
    return 0;
}


#include <stdio.h>

int main()
{
	int i;
    char str[21];
	scanf("%s",str);
	for(i=0;str[i];i++){
		printf("\'%c\'\n",str[i]);
	}
    return 0;
}

